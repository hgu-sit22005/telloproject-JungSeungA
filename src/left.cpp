#include "left.h"
#include <cstring>

#include <sstream>  //추가 : string stream ;출력을 string에 넣어준다. 





//argument
Left::Left() //data seet의 명령체계를 참고하여 동작해야한다. no argument
{
	command = new char[strlen("left 20")+1];
	strcpy(command, "left 20");
}



Left::Left(int _value)
{
	std::stringstream sstream;
	sstream << "left " << _value;

	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());

}



double Left::get_delay()
{ 
	return 2; 
}