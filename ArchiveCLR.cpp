#include "pch.h"
#include "ArchiveCLR.h"

void ArchiveCLR::ArchiveFunctionWrapper::extractArchive(HWND hWnd, wstring str, string& path, string& outname) {
	archive->extractArchive(hWnd, str, path, outname);
}

void ArchiveCLR::ArchiveFunctionWrapper::addFileInArchive() {
	archive->addFileInArchive();
}

void ArchiveCLR::ArchiveFunctionWrapper::close(HWND hWnd1, HWND hWnd2) {
	archive->close(hWnd1, hWnd2);
}

void ArchiveCLR::ArchiveFunctionWrapper::writeArchiveSingle(HWND hWnd, wstring str, string path, vector<string> argv, string outname) {
	archive->writeArchiveSingle(hWnd, str, path, argv, outname);
}

void ArchiveCLR::ArchiveFunctionWrapper::writeArchiveDirectory(wstring str, string path, vector<string> argv, string outname) {
	archive->writeArchiveDirectory(str, path, argv, outname);
}

void ArchiveCLR::ArchiveFunctionWrapper::selectFile(HWND& hWnd, wstring& str) {
	archive->selectFile(hWnd, str);
}

void ArchiveCLR::ArchiveFunctionWrapper::selectArchive(HWND& hWnd, wstring& str) {
	archive->selectArchive(hWnd, str);
}