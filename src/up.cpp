#include "up.h"
#include <cstring>

#include<sstream>  //추가 : string stream ;출력을 string에 넣어준다. 



/*
Up::Up() //data seet의 명령체계를 참고하여 동작해야한다. no argument
{
	command = new char[strlen("up 20")+1];
	strcpy(command, "up 20");
}

double Up::get_delay()
{ 
	return 2; 
}

*/



//argument
Up::Up() //data seet의 명령체계를 참고하여 동작해야한다. no argument
{
	command = new char[strlen("up 20")+1];
	strcpy(command, "up 20");
}



Up::Up(int _value)
{
	std::stringstream sstream;
	sstream << "up " << _value;

	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());

}



double Up::get_delay()
{ 
	return 2; 
}