#pragma once
#include "TelloPro.h"

//argument 추가 
class Ccw: public TelloPro
{
public:
	Ccw();
	Ccw(int _value);
	
public:
	double get_delay();
};
