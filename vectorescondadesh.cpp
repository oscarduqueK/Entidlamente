#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

struct raboscar {

	string name;
	string fecha;  
	string DNI;  
};



void ej1(raboscar& oscar)
{
	 

	vector<int> v1(5); 
	vector<int> v2(10 , 0);
	vector<int> v3 = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	vector<string> v4 = { "Golfa", "Elefanta", "Alta", "Morena", "Lacosa", "Nerea" }; 
	vector<int> v5 = v3;
	vector<raboscar> v6 = { 

		{"Paco", "25/10/2006", "11111111G" },
		{"Claros", "26/10/2006", "11111112F" },
		{"Cosa", "22/10/2006", "11311111V"} 
	}; 

	//print v1 
	for (int a : v1)
	{
		cout << a << " ";
	}cout << endl;

	//print v2 
	for (int b : v2)
	{
		cout << b << " "; 
	}cout << endl; 

	//print v3
	for (int c : v3) 
	{
		cout << c << " "; 
	}cout << endl; 

	//print v4
	for (string name : v4)
	{
		cout << name << " ";
	} cout << endl;  

	//print v5 
	for (int a : v5)
	{
		cout << a << " "; 
	}cout << endl; 

	//print v6 
	for (const raboscar& persona : v6) { 
		cout << persona.name << " "; 
		cout << persona.fecha << " "; 
		cout << persona.DNI << endl; 
	} 
	 
}

//crear ve1 y ve2 y crear v3 (ve3 = ve1 + ve2)
void ej2(vector<int>& ve1, vector<int>& ve2, vector<int>& ve3, int size)
{
	for (int i = 0; i < size; i++)
	{
		ve3[i] = ve1[i] + ve2[i];
	}

	for (int a : ve3) 
	{
		cout << a << " "; 
	}cout << endl; 
}

//crear dos vectores de strings, concatenacion de los cuales se almacenara en vc1
void ej3(vector<string>& vc1, vector<string>& vc2, int& size)  
{
	//vc1.insert(vc1.end(), vc2.begin(), vc2.end()); 
	size = vc1.size();
	//vc1.resize(size);


	for (int i = 0; i < size; i++)
	{ 
		vc1[i] = vc1[i] + " " + vc2[i];  
	}

	for (string a : vc1) 
	{
		cout << a << " "; 
	}cout << endl; 
}

//recibir un vector y desplazar sus numeros +1 a la derecha
void ej4(vector<int>& vd1, int& size)
{
	//pendiente mi rabo en tu frente
}

void main()
{
	srand(time(NULL));

	//ejercicio 1
	raboscar oscar;
	ej1(oscar); 


	//ejercicio2
	int size = 5;
	vector<int> ve1 = { 1, 2, 4, 2, 1 }; 
	vector<int> ve2 = { 5, 4, 2, 4, 5 }; 
	vector<int> ve3(size); 
	ej2(ve1, ve2, ve3, size);  
	

	//ejercicio 3
	vector<string> vc1 = { "Paco" };
	vector<string> vc2 = { "Gerte" };
	ej3(vc1, vc2, size);  

	//ejercicio 4
	vector<int> vd1 = { 1, 2, 4, 2, 1 };
	ej4(vd1, size);
	
}