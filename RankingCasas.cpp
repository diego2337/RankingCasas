#ifdef _WIN32 
	#define _CRT_SECURE_NO_DEPRECATE 
#endif
#include <iostream>
#include <cstdio>
#include "rapidjson/rapidjson.h"
#include "rapidjson/document.h"
#include "rapidjson/filereadstream.h"

using namespace rapidjson;
using namespace std;
#ifndef JSONREADER_H
	#include "JSONReader.h"
#endif
#ifndef FAMILY_H
	#include "Family.h"
#endif

int main()
{
	std::string familyJson = "Data/Familias.json";
	JSONReader* jsonReader = new JSONReader(familyJson);
	std::map<std::string, Family*> families;
	for (SizeType i = 0; i < (*jsonReader->getFamilyJson())["familias"].Size(); i++)
	{
		families["todo"] = new Family((*jsonReader->getFamilyJson())["familias"][i].GetObject());
	}
	delete jsonReader;
	return 0;
}
