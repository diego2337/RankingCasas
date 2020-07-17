#pragma once
#ifndef FAMILY_H
#define FAMILY_h
#include <map>
#ifndef PEOPLE_H
#include "People.h"
#endif
#ifndef WAGE_H
#include "Wage.h"
#endif
#include "rapidjson/document.h"
using namespace rapidjson;
class Family
{
private:
	std::string id;
	std::map<std::string, People*> people;
	std::map<std::string, Wage*> wages;
	std::string status;
	int ranking;
public:

	Family(Value family)
	{
		this->id.append(family["id"].GetString());
		this->status = family["status"].GetString();
		this->ranking = 0;
	}

	~Family()
	{

	}
};
#endif