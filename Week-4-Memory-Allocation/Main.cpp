#define _CRTDBG_MAP_ALLOC 
#include <crtdbg.h>
#include <iostream>
using namespace std; 

class CModule
{
private : 

	string moduleName; 
	float moduleMark;

public:

	void setModule(string Name ,float Mark);
	void outPutModule();
};




int main()
{

	 // Exercise 8: Module Marks (sparse array) 





	_CrtDumpMemoryLeaks();

}

void CModule::setModule(string Name, float Mark)
{
	moduleName = Name; 
	moduleMark = Mark;
}

void CModule::outPutModule()
{

	cout << moduleName << " " << moduleMark << endl;

}
