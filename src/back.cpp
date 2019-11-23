#include "back.h"
#include <cstring>
#include <sstream>

Back::Back()
{
	command = new char[strlen("back 20")+1];
	strcpy(command, "back 20");
}
//2019.11.21
Back::Back(int _value)
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

	sstream << "back "<< _value;

	command=new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());
}
double Back::get_delay()
{ 
	return 5; 
}