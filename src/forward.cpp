#include "forward.h"
#include <cstring>

#include<sstream>  //추가 : string stream ;출력을 string에 넣어준다. 




//argument
Forward::Forward() //data seet의 명령체계를 참고하여 동작해야한다. no argument
{
	command = new char[strlen("forward 20")+1];
	strcpy(command, "forward 20");
}



Forward::Forward(int _value)
{
	std::stringstream sstream;
	sstream << "forward " << _value;

	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());

}



double Forward::get_delay()
{ 
	return 2; 
}