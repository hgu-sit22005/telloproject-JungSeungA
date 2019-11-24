#pragma once
#include "TelloPro.h"

//argument 추가 
class Down: public TelloPro
{
public:
	Down();
	Down(int _value);
	
public:
	double get_delay();
};
