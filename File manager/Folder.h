#pragma once
#include"FileManager.h"
#include"File.h"

class Folder
{	
	char foldername[77];
public:	
	
	Folder() {}

	char* GetFolder()
	{ 
		return foldername; 
	}

	void SetFolder(char* folder) 
	{
		strcpy_s(foldername, folder); 
	}
};

