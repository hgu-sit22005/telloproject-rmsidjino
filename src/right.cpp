#include "right.h"
#include <cstring>
#include <sstream>

Right::Right()
{
	command = new char[strlen("rigth 20")+1];
	strcpy(command, "right 20");
}
//2019.11.21
Right::Right(int _value)
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

	sstream << "right "<< _value;

	command=new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());
}
double Right::get_delay()
{ 
	return 5; 
}