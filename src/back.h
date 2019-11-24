#pragma once
#include "TelloPro.h"

//argument 추가 
class Back: public TelloPro
{
public:
	Back();
	Back(int _value);
	
public:
	double get_delay();
};
