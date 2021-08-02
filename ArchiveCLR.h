#pragma once
#include <ArchiveFunction.h>

using namespace System;

namespace ArchiveCLR {
	public ref class ArchiveFunctionWrapper {
		ArchiveFunction* archive;
	public:
		ArchiveFunctionWrapper() { archive = new ArchiveFunction(); }
		~ArchiveFunctionWrapper() { delete archive; }

		void extractArchive(HWND hWnd, wstring str, string& path, string& outname);
		void addFileInArchive();
		void close(HWND hWnd1, HWND hWnd2);
		void writeArchiveSingle(HWND hWnd, wstring str, string path, vector<string> argv, string outname);
		void writeArchiveDirectory(wstring str, string path, vector<string> argv, string outname);
		void selectFile(HWND& hWnd, wstring& str);
		void selectArchive(HWND& hWnd, wstring& str);
	};
}
