#pragma once
#include <ArchiveFunction.h>
#include <msclr\marshal_cppstd.h>
#include <stdlib.h>
#include <string>

using namespace System::Collections::Generic;
using namespace msclr::interop;

namespace ArchiveCLR
{
	public ref class ArchiveWrapper
	{
		std::vector<float>* size_vec;
		std::vector<std::string>* name_vec;
		std::vector<int>* height_vec;

		IAbstractArchive* archive;
	public:
		List<float>^ size = {};
		List<System::String^>^ name = {};
		List<int>^ height = {};

		int num;

		ArchiveWrapper() {
			size_vec = new std::vector<float>();
			name_vec = new std::vector<std::string>();
			height_vec = new std::vector<int>();

			size = gcnew List<float>();
			name = gcnew List<System::String^>();
			height = gcnew List<int>();

			unique_ptr<ArchiveFactory> f1(new ArchiveFactory);
			this->archive = f1->CreateProductA();
		};

		void extractArchive();
		void addFileInArchive();	
		void writeArchiveSingle();
		void writeArchiveDirectory();
		void selectFile();
		void selectArchive();
		void DoArchiveParam();
		void DoFileParam();
		void Draw();
	};
}