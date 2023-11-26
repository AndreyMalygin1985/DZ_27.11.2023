#pragma once
#include"FileManager.h"
#include"Folder.h"

class File
{
	char filename[200];
public:

	File() {}

	void SetFile(char* file) 
	{ 
		strcpy_s(filename, file);
	}

	char* GetFile() 
	{ 
		return filename;
	}
};

