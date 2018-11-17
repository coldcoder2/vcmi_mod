#pragma once
#include "stdafx.h"



enum styleSize
{
	first = 5,
	second = 1,
	third = 7,
	fourth = 20,
	fifth = 20,
};

class modStyle
{
public:
	modStyle();
	~modStyle();
private:
	char names[];
};



modStyle::modStyle()
{
}


modStyle::~modStyle()
{
}
