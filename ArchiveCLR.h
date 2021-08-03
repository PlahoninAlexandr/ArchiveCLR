#pragma once
#include <ArchiveFunction.h>

using namespace System;

namespace ArchiveCLR {
	public ref class ArchiveFunctionWrapper {
		IAbstractArchive* archive;
	public:
		ArchiveFunctionWrapper() {
			unique_ptr<ArchiveFactory> f1(new ArchiveFactory);
			this->archive = f1->CreateProductA();
		};

		void extractArchive(wstring str, string& path, string& outname);
		void addFileInArchive();
		void writeArchiveSingle(wstring str, string path, vector<string> argv, string outname);
		void writeArchiveDirectory(wstring str, string path, vector<string> argv, string outname);
		void selectFile(string& str);
		void selectArchive(wstring& str);
	};
}