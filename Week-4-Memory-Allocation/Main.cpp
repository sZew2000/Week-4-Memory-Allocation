#define _CRTDBG_MAP_ALLOC 
#include <crtdbg.h>
#include <iostream>
#include <string>
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
	moduleName = Name; 
	moduleMark = Mark;
}

void CModule::outPutModule()
{

	cout << moduleName << " " << moduleMark << endl;

}
