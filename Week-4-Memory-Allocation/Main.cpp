#define _CRTDBG_MAP_ALLOC 
#include <crtdbg.h>
#include <iostream>
#include <string>
using namespace std; 

class CModule
{
private : 

	CModule* modules[4];

public:

	void setModule(string Name ,float Mark);
	void outPutModule();
};




int main()
{

	 // Exercise 8: Module Marks (sparse array) 

	const int size = 4;
	CModule* mArr[size];

	 

	for (int i = 0; i < size; i++)
	{
	
		mArr[i] = new CModule; 
		
		string name;
		float mark; 

		cin >> name; 
		cin >> mark; 

		mArr[i]->setModule(name, mark);
	}

	for (int i = 0; i < size; i++)
	{
	
		mArr[i]->outPutModule();
	
	
	
	}


	_CrtDumpMemoryLeaks();

}

void CModule::setModule(string Name, float Mark)
{
	for (int i = 0; i < 4; i++) 
	{
		modules[i] = new CModule;
	
	
	}


}



void CModule::outPutModule()
{

	cout << moduleName << " " << moduleMark << endl;

}
