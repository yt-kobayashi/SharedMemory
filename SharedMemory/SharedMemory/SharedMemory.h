#pragma once
/// <summary>
/// this is a "MemoryMappedFile" wrapper.
/// </summary>

#include <Windows.h>

ref class SharedMemory
{
private:
	// Variable
	HANDLE mappingFileHandle;					// Handle of mapping file.
	HANDLE mappingFileMutexHandle = NULL;		// Mutex object for exclusive access to the mapping file.
	bool isExists;								// Created flag. (True : Created,	False : Not created)

	// Const Variable
	const char* mappingFileName = "TestMappringFileName";	// Name of the mapping file.
	const char* mutexObjectName = "TestMutexObjectName";	// Name of mutex object.
};

