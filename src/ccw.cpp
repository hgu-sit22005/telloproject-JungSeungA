#include "ccw.h"
#include <cstring>

#include <sstream>  //추가 : string stream ;출력을 string에 넣어준다. 





//argument
Ccw::Ccw() //data seet의 명령체계를 참고하여 동작해야한다. no argument
{
	command = new char[strlen("ccw 90")+1];
	strcpy(command, "ccw 90");
}



Ccw::Ccw(int _value)
{
	std::stringstream sstream;
	sstream << "ccw " << _value;

	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());

}



double Ccw::get_delay()
{ 
	return 2; 
}