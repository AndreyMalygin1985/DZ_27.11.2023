#pragma once
#include<iostream>

class FileManager
{
	char fullpath[256];
public:

	FileManager(const char* name) 
	{
		if (fullpath) 
		{
			strcpy_s(fullpath, 200, name);
		}
	}

	FileManager() {}

	~FileManager() {}

	char* GetPath() 
	{
		return fullpath; 
	}

	void SetPath(char* name) 
	{
		strcpy_s(fullpath, 200, name);
	}
};

