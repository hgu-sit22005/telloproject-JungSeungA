#include "right.h"
#include <cstring>

#include <sstream>  //추가 : string stream ;출력을 string에 넣어준다. 





//argument
Right::Right() //data seet의 명령체계를 참고하여 동작해야한다. no argument
{
	command = new char[strlen("right 20")+1];
	strcpy(command, "right 20");
}



Right::Right(int _value)
{
	std::stringstream sstream;
	sstream << "right " << _value;

	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());

}



double Right::get_delay()
{ 
	return 2; 
}