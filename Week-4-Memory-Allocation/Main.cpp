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

	delete(cat_1);

	//Exercise 3: Strings and things
	{
		string name = "Sev";
	}
	
	//Exercise 4: known data type and a function

	int* ptr = new int; 

	*ptr = 4;  
	cout << *ptr << endl;


	_CrtDumpMemoryLeaks();

}