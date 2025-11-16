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

int main()
{
	//Exercise 6: bank structure

	BankAccount* person_1 = new BankAccount; 

	person_1->nameOnAcc = "Seweryn";
	person_1->balance = 1000.50;

	outputAccount(person_1);  

	delete (person_1);

	_CrtDumpMemoryLeaks();

}

void outputAccount(BankAccount* person)
{

	cout << person->nameOnAcc;
	cout << person->balance;

}