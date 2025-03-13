#include <iostream>
#include <cstdlib>

using namespace std;

int* newArray(int* dynamicAgay1D, int oldsize, int newsize) 
{
	//Correcciones para que el codigo no pete si se la líamos
	//no funcionan xd
	if (dynamicAgay1D == nullptr)
		return dynamicAgay1D;
	
	if (oldsize < 0 || newsize < 0)
		return dynamicAgay1D; 
	
	if (newsize <= oldsize)
		return dynamicAgay1D; 
	
	//paso a uno mas grande
	int newSizeAgay; 
	cout << "di new Siz3: " << endl; 
	cin >> newSizeAgay; 

	int* newDynamicAgay1D = new int[newsize];  
	//copiar array antiguo al nuevo

	for (int i = 0; i < oldsize; ++i) 
	{
		newDynamicAgay1D[i] = dynamicAgay1D[i]; 
	}

	//destruir el array antiguo
	delete[] dynamicAgay1D; 

	//paso final, return pointer, newdynamicarray1D
	return newDynamicAgay1D;
}

//void main()
//{
//	int dynamicsize; 
//	cout << "di: " << endl;
//	cin >> dynamicsize;
//
//	int* dynamicAgay1D = new int[dynamicsize];
//
//	for (int i = 0; i < dynamicsize; ++i)
//	{
//		dynamicAgay1D[i] = i;
//	}
//	for (int i = 0; i < dynamicsize; ++i)
//	{
//		cout << dynamicAgay1D[i] << " ";
//	} cout << endl;
//
//
//	//paso a uno mas grande
//	int newSizeAgay;
//	cout << "di new Siz3: " << endl;
//	cin >> newSizeAgay;
//
//	int* newDynamicAgay1D = new int[newSizeAgay];
//	//copiar array antiguo al nuevo
//
//	for (int i = 0; i < dynamicsize; ++i)
//	{
//		newDynamicAgay1D[i] = dynamicAgay1D[i];
//	}
//
//	//destruir el array antiguo
//	delete[] dynamicAgay1D;
//
//	//asignar dynamic array, lo explica mas alante el manish
//	dynamicAgay1D = newDynamicAgay1D;
//
//	for (int i = 0; i < newSizeAgay; ++i)
//	{
//		cout << newDynamicAgay1D[i] << " ";
//	} cout << endl;
//
//
//	newArray(dynamicAgay1D, dynamicsize, newSizeAgay);
//	//preguntar a mi colega GPT como se hace un agay dinamico en el cual se aumente el tamaño del agay
//	//y preguntar como se haría para bajar el tamaño
//
//}