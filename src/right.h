#pragma once
#include "TelloPro.h"

//argument 추가 
class Right: public TelloPro
{
public:
	Right();
	Right(int _value);
	
public:
	double get_delay();
};
