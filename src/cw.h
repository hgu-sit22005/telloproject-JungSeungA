#pragma once
#include "TelloPro.h"

//argument 추가 
class Cw: public TelloPro
{
public:
	Cw();
	Cw(int _value);
	
public:
	double get_delay();
};
