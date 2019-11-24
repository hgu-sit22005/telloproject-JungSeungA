#pragma once
#include "TelloPro.h"

//argument 추가 
class Left: public TelloPro
{
public:
	Left();
	Left(int _value);
	
public:
	double get_delay();
};
