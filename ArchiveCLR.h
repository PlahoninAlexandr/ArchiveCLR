#pragma once
#include <ArchiveFunction.h>
#include <msclr\marshal.h>
#include <msclr\marshal_cppstd.h>

using namespace System;

namespace ArchiveCLR
{
	public ref class ArchiveWrapper
	{

		IAbstractArchive* archive;
	public:
		ArchiveWrapper() {
			unique_ptr<ArchiveFactory> f1(new ArchiveFactory);
			this->archive = f1->CreateProductA();
		};

		void extractArchive();
		void addFileInArchive();
		void writeArchiveSingle();
		void writeArchiveDirectory();
		void selectFile();
		void selectArchive();
	};
}
