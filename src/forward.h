#pragma once
#include "TelloPro.h"

//argument 추가 
class Forward: public TelloPro
{
public:
	Forward();
	Forward(int _value);
	
public:
	double get_delay();
};
