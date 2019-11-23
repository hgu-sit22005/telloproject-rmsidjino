#include "cw.h"
#include <cstring>
#include <sstream>

Cw::Cw()
{
	command = new char[strlen("cw 20")+1];
	strcpy(command, "cw 20");
}
//2019.11.21
Cw::Cw(int _value)
{
	std::stringstream sstream;

	//switch(_value)
	//{
	//case 0;
		//sstream<<"flip l";
		//break;
	//case 1;
		//sstream<<"flip r";
		//break;
	//case 2;
		//sstream<<"flip f";
		//break;
	//case 3;
		//sstream<<"flip b";
		//break;
	//}

	sstream << "cw "<< _value;

	command=new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());
}
double Cw::get_delay()
{ 
	return 5; 
}