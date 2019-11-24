#include "cw.h"
#include <cstring>

#include <sstream>  //추가 : string stream ;출력을 string에 넣어준다. 





//argument
Cw::Cw() //data seet의 명령체계를 참고하여 동작해야한다. no argument
{
	command = new char[strlen("cw 90")+1];
	strcpy(command, "cw 90");
}



Cw::Cw(int _value)
{
	std::stringstream sstream;
	sstream << "cw " << _value;

	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());

}



double Cw::get_delay()
{ 
	return 2; 
}