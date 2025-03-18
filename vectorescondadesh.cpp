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

void main()
{
	srand(time(NULL));
	raboscar oscar;
	ej1(oscar); 

}