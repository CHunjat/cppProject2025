#pragma once

#include <iostream>
#include <string>
#include "UtilConsole.h"
class Image
{
private:
	char ailens[50][50];
	int height;
public:
	Image(const char* Model, int  height)
	{
		this->height = height;

		const char* lineStart = Model;
		for (int i = 0; i < height; i++)
		{
			const char* lineEnd = strchr(lineStart, '\n'); 
			if (lineEnd == nullptr)
			{
				lineEnd == Model + strlen(Model); 
			}
			int length = lineEnd - lineStart;
			strncpy_s(this->ailens[i], lineStart, length);
			lineStart = lineEnd + 1;
		}

	}
	
};

