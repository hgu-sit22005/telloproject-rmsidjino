#include "left.h"
#include <cstring>
#include <sstream>

Left::Left()
{
	command = new char[strlen("left 20")+1];
	strcpy(command, "left 20");
}
//2019.11.21
Left::Left(int _value)
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

	sstream << "left "<< _value;

	command=new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());
}
double Left::get_delay()
{ 
	return 5; 
}