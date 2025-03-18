#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

void Vectors()
{
	//crear elementos
	vector<int> myIntVector;
	vector<int> myIntVector2 = { 3, 1, 15, 2, 10 };
	vector<int> myIntVector3 = myIntVector2;
	vector<int> myIntVector4(5, -1);

	//leer elementos
	cout << myIntVector2[4] << endl;

	for (int i = 0; i < myIntVector2.size(); ++i)
	{
		cout << myIntVector2[i] << " ";
	} cout << endl;

	//for range based loop
	for (int elem : myIntVector2)
	{
		cout << elem << " ";
	} cout << endl;

	//iterators
	for (vector<int>::iterator it = myIntVector2.begin(); it < myIntVector2.end(); ++it)
	{
		cout << *it << " ";
	} cout << endl;


	sort(myIntVector2.begin(), myIntVector2.end());
	//el sort ordena el array y luego con este print me lo da todo ordenado
	for (vector<int>::iterator it = myIntVector2.begin(); it < myIntVector2.end(); ++it)
	{
		cout << *it << " ";
	} cout << endl;

	//UPDATE
	for (vector<int>::iterator it = myIntVector2.begin(); it < myIntVector2.end(); ++it)
	{
		*it = 5;
	} cout << endl;

	for (int elem : myIntVector2)
	{
		cout << elem << " ";
	} cout << endl;


	for (int elem : myIntVector2)
	{
		elem = 7;

	} cout << endl; // al cmabiar los valores a 7 no se printea 7, se printea lo otro, pero pq le sale de los cojones, la forma correcta seria poner &elem

	for (int elem : myIntVector2)
	{
		cout << elem << " ";

	} cout << endl;

	//la manera que se me ocurre para printealo una vez seteado seria incluir el cout dentro
	for (int elem : myIntVector2)
	{
		elem = 7;
		cout << elem << " ";

	} cout << endl;

	/*for (int elem : myIntVector2)
	{
		elem = 7;

	} cout << endl;

	for (int& elem : myIntVector2)
	{
		cout << elem << " ";
	} cout << endl; */

	//acabar esto y consultar cosas de los pushbacks
	myIntVector2.push_back(6);
	//printVector(myIntVector2); 
}

template <class T> 
struct VectorRusticoCustom {  

	int* data;
	int size; 

	//Constructor
	//1 - CREATE
	void CustomVector(int sizee, int value) 
	{
		cout << "Constructor called" << endl;
		data = new int[sizee];  
		for (int i = 0; i < sizee; ++i) 
		{
			data[i] = value;  
		}
		size = sizee;
	}
};

int main()
{
	Vectors();
	//llamar a customvector del strcut este de polla
}
