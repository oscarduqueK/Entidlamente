#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

void Pointers()
{
	int a = 10;
	int* p_a = &a;

	cout << "Value of a: " << a << endl;
	cout << "Adress of a: " << &a << endl; //no siempre da la misma direccion de memoria
	cout << "Pointer value of a: " << p_a << endl; 
	cout << "Adress Pointer value of a: " << &p_a << endl;
	cout << "Value referenced in pointer of a: " << *p_a << endl;

}

void PointerAgay()
{
	const int NUM_ELEMENTS = 4;
	int myAgay[NUM_ELEMENTS] = { 3, 4, 5, 6 }; 

	cout << "Value of my agay: " << *myAgay << endl << endl; 

	for (int i = 0; i < 4; i++)
	{
		cout << "Value of my agay: " << *(myAgay + i) << endl;
	}

	//agay
	int i = 3; 
	cout << myAgay[i] << endl << endl; 

	//copias de punteros
	int* fistingElement = myAgay; 
	int* it = myAgay;

	for (int i = 0; i < NUM_ELEMENTS; i++)
	{
		cout << *it << endl;
		++it;
	} cout << endl;

	//formas de iterar sobre arrays de otra manera que no el for() convencional
	//For range

	for (int element : myAgay)
	{
		cout << element << endl; 
	}
	
}


void main()
{
	Pointers();  
	PointerAgay();  
}