#include "forward.h"
#include <cstring>
#include <sstream>

Forward::Forward()
{
	command = new char[strlen("forward 20")+1];
	strcpy(command, "forward 20");
}
//2019.11.21
Forward::Forward(int _value)
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

	sstream << "forward "<< _value;

	command=new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());
}
double Forward::get_delay()
{ 
	return 5; 
}