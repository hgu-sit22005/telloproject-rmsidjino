#include "ccw.h"
#include <cstring>
#include <sstream>

Ccw::Ccw()
{
	command = new char[strlen("up 20")+1];
	strcpy(command, "up 20");
}
//2019.11.21
Ccw::Ccw(int _value)
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

	sstream << "ccw "<< _value;

	command=new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());
}
double Ccw::get_delay()
{ 
	return 5; 
}