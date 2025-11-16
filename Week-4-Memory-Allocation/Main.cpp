#define _CRTDBG_MAP_ALLOC 
#include <crtdbg.h>
#include <iostream>
using namespace std; 



struct BankAccount
{
	string nameOnAcc;
	float balance;


};

void outputAccount(BankAccount* person); 
void flattenArray(int* arrPtr, int size); 
void displayArray(int* arrPtr, int size);

int main()
{
	//Exercise 6: bank structure

	BankAccount* person_1 = new BankAccount; 

	person_1->nameOnAcc = "Seweryn";
	person_1->balance = 1000.50;

	outputAccount(person_1);  

	delete (person_1);

	_CrtDumpMemoryLeaks();

	 // Exercise 7: flatten array 

	int* arr = new int[4]{3,7,4,9};
	int* ptr = arr;  
	ptr = arr;

	displayArray(ptr, 4);
	flattenArray(ptr, 4);
	displayArray(ptr, 4);


}

void outputAccount(BankAccount* person)
{

	cout << person->nameOnAcc << " ";
	cout << person->balance << endl;

}

void flattenArray(int* arrPtr, int size)
{

	for (int i = 0; i < size; i++)
	{
	
		*(arrPtr + i) = 0;
	
	}


}

void displayArray(int* arrPtr, int size)
{
	for (int i = 0; i < size; i++)
	{

		cout << *(arrPtr + i) << endl;

	}

}
