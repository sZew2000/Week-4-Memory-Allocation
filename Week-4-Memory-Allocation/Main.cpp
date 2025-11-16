#define _CRTDBG_MAP_ALLOC 
#include <crtdbg.h>
#include <iostream>
using namespace std; 

struct cat
{
	string name;
	int age;

};

int main()
{
	// Exercise 2: Cat Structure
	
	cat* cat_1 = new cat; 

	cat_1->name = "sev"; 
	cat_1->age = 25;


	_CrtDumpMemoryLeaks();

}