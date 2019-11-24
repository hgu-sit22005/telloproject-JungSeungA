#pragma once
#include "TelloPro.h"
/*
class Up: public TelloPro
{
public:
	Up();
	
public:
	double get_delay();
};

*/
//argument 추가 
class Up: public TelloPro
{
public:
	Up();
	Up(int _value);
	
public:
	double get_delay();
};
