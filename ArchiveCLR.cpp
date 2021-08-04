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