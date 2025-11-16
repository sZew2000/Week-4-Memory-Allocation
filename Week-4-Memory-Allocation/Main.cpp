#define _CRTDBG_MAP_ALLOC 
#include <crtdbg.h>
#include <iostream>
using namespace std; 

void changeInt(int* ptr);
void cancel(int* ptr_1, int* ptr_2);

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
	changeInt(ptr);
	cout << *ptr << endl;

	delete(ptr);


	_CrtDumpMemoryLeaks();

	// Exercise 5: cancel

	int* ptr_1 = new int; 
	int* ptr_2 = new int; 
	*ptr_1 = 10; 
	*ptr_2 = 30;
	
	cout << *ptr_1 << " " << *ptr_2 << endl;
	cancel(ptr_1, ptr_2);
	cout << *ptr_1 << " " << *ptr_2 << endl;

	delete(ptr_1, ptr_2);

}

void changeInt(int* ptr)
{

	*ptr = 10;

}

void cancel(int* ptr_1, int* ptr_2)
{
	if (*ptr_1 < *ptr_2)
	{
		*ptr_1 = 0;
	}
	else
	{
		*ptr_2 = 0;
	}



}
