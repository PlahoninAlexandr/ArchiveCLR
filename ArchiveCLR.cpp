#include "pch.h"

#include "ArchiveCLR.h"

void ArchiveCLR::ArchiveWrapper::extractArchive() {
	archive->extractArchive();
}

void ArchiveCLR::ArchiveWrapper::addFileInArchive() {
	archive->addFileInArchive();
}

void ArchiveCLR::ArchiveWrapper::writeArchiveSingle() {
	archive->writeArchiveSingle();
}

void ArchiveCLR::ArchiveWrapper::writeArchiveDirectory() {
	archive->writeArchiveDirectory();
}

void ArchiveCLR::ArchiveWrapper::selectFile() {
	archive->selectFile();
}

void ArchiveCLR::ArchiveWrapper::selectArchive() {
	archive->selectArchive();
}

void ArchiveCLR::ArchiveWrapper::DoArchiveParam() {
	archive->DoArchiveParam(*size_vec, *name_vec, *height_vec);
	for (auto it = size_vec->begin(); it != size_vec->end(); ++it) size->Add(*it);
	for (auto it = name_vec->begin(); it != name_vec->end(); ++it) {
		System::String^ result;
		result = marshal_as<System::String^>(*it);
		name->Add(result);
	}
	for (auto it = height_vec->begin(); it != height_vec->end(); ++it) height->Add(*it);
	num = size_vec->size();
}

void ArchiveCLR::ArchiveWrapper::DoFileParam() {
	archive->DoFileParam(*size_vec, *name_vec, *height_vec);
	for (auto it = size_vec->begin(); it != size_vec->end(); ++it) size->Add(*it);
	for (auto it = name_vec->begin(); it != name_vec->end(); ++it) {
		System::String^ result;
		result = marshal_as<System::String^>(*it);
		name->Add(result);
	}
	for (auto it = height_vec->begin(); it != height_vec->end(); ++it) height->Add(*it);
	num = size_vec->size();
}

void ArchiveCLR::ArchiveWrapper::Draw(System::IntPtr hWnd) {
	HWND nativeHWND = (HWND)hWnd.ToPointer();
	archive->Draw(nativeHWND);
}