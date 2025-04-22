#include <iostream>
#include <string>

using namespace std;

class Person
{
	//Atribuos
private:
	string name;
	string email;
	string phonenumber;
	
	//Hay partes de las instrucciones donde se pone (+) o (-) a las variables, 
	// + es publico  
	// - es privado //creo pto rustico


	//Metodos
public:
	void PurchaseParkingPassNiger()
	{

	}
};

class Adress
{
private:
	string street;
	string city;
	string state;
	int PostalCode;
	string country;

	//Metodo privado para comprobar que todas las variables de la clase estan llenas
	//Asi se asignan responsabilidades y mierdas
	//Esto se puede llamar mas tarde desde adress
	bool Validate()
	{

	}

public:
	
	Adress(string street, string city, string state, int PostalCode, string country)
	{
		Validate();
	}

};

void main()
{
	//Si le pongo esto, le fuerzo a pasarle los datos esos
	//Obligatoriamente llamara al validate, asi siempre entra el codigo con su validacion
	Adress a1();
}