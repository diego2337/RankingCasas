#pragma once
#ifndef RANKING_H
#define RANKING_H
#include <iostream>
#include <cstdio>
#include <chrono>
#ifndef FAMILY_H
	#include "Family.h"
#endif
class Ranking
{
private:
	std::string id;
	int criteriaMatch;
	int total;
	
public:
	Ranking()
	{

	}

	~Ranking()
	{

	}
	void getRanking(Family*);
	bool isQualified(Family*);
};
#endif