#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

enum  class weapon {
	FISTS,
	GUN,
	SHOTGUN,
	SNIPER,
	COUNT,
	BOW,
	INVALID, //esto seria el valor x defecto para q no tengan nada
};

//se puede poner class detras de los enums para que no haya problemas de nombres repetidos
enum  class Outfit{
	JERSEY,
	PANTALON,
	//BOW, //se repite bow
	//COUNT,
	//INVALID,
};

//void main()
//{
//	weapon weapon;
//	Outfit outfit; 
//
//	if (static_cast<int>(weapon::SHOTGUN) != static_cast<int>(Outfit::PANTALON))
//	{
//		cout << "a";
//	}
//}