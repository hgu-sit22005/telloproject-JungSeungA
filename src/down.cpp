#include "down.h"
#include <cstring>

#include<sstream>  //추가 : string stream ;출력을 string에 넣어준다. 




//argument
Down::Down() //data seet의 명령체계를 참고하여 동작해야한다. no argument
{
	command = new char[strlen("down 20")+1];
	strcpy(command, "down 20");
}



Down::Down(int _value)
{
	std::stringstream sstream;
	sstream << "down " << _value;

	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());

}



double Down::get_delay()
{ 
	return 2; 
}