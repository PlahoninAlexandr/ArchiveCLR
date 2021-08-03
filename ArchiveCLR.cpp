#include "pch.h"
#include "ArchiveCLR.h"

void ArchiveCLR::ArchiveFunctionWrapper::extractArchive(wstring str, string& path, string& outname) {
	archive->extractArchive(str, path, outname);
}

void ArchiveCLR::ArchiveFunctionWrapper::addFileInArchive() {
	archive->addFileInArchive();
}

void ArchiveCLR::ArchiveFunctionWrapper::writeArchiveSingle(wstring str, string path, vector<string> argv, string outname) {
	archive->writeArchiveSingle(str, path, argv, outname);
}

void ArchiveCLR::ArchiveFunctionWrapper::writeArchiveDirectory(wstring str, string path, vector<string> argv, string outname) {
	archive->writeArchiveDirectory(str, path, argv, outname);
}

void ArchiveCLR::ArchiveFunctionWrapper::selectFile(string& str) {
	wstring ws(str.begin(), str.end());
	archive->selectFile(ws);
}

void ArchiveCLR::ArchiveFunctionWrapper::selectArchive(wstring& str) {
	archive->selectArchive(str);
}