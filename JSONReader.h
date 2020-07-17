#pragma once
#ifndef JSONREADER_H
#define JSONREADER_H

class JSONReader
{
private:
	Document *familyJson;
	FILE* file;
public:
	JSONReader(std::string fileName)
	{
		file = fopen(fileName.c_str(), "rb");
		char readBuffer[65536];
		familyJson = new Document();
		FileReadStream fs(file, readBuffer, sizeof(readBuffer));
		familyJson->ParseStream(fs);
		fclose(file);
	}

	~JSONReader() 
	{
		delete familyJson;
	}

	Document* getFamilyJson()
	{
		return familyJson;
	}
};
#endif