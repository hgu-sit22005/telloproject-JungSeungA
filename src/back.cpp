#include "back.h"
#include <cstring>

#include <sstream>  //추가 : string stream ;출력을 string에 넣어준다. 





//argument
Back::Back() //data seet의 명령체계를 참고하여 동작해야한다. no argument
{
	command = new char[strlen("back 20")+1];
	strcpy(command, "back 20");
}



Back::Back(int _value)
{
	std::stringstream sstream;
	sstream << "back " << _value;

	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());

}



double Back::get_delay()
{ 
	return 2; 
}