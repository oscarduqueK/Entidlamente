#include <iostream>
using namespace std;

enum class EnemyType
{
	CUMMEL,
	JACK,
	JARRY,
	
};

struct Enemy
{
	int mhealth;
	int mattackpower;
	EnemyType mtype;
};

//todo esto le añade un doble sentido a los operadores que usamos

bool operator==(const Enemy& enemy1, const Enemy& enemy2)
{
	return (enemy1.mhealth == enemy2.mhealth
		&& enemy1.mattackpower == enemy2.mattackpower
		&& enemy1.mtype == enemy1.mtype);
}

bool operator>(const Enemy& enemy1, const Enemy& enemy2)
{
	return enemy1.mhealth > enemy2.mhealth; 
}

Enemy& operator++(Enemy& enemy) 
{
	enemy.mhealth += 33; 
	return enemy;
}

//int main()
//{
//	Enemy e1;
//	e1.mattackpower = 3;
//	e1.mhealth = 1;
//	e1.mtype = EnemyType::CUMMEL;
//
//	Enemy e2;
//	e2.mattackpower = 3;
//	e2.mhealth = 1;
//	e2.mtype = EnemyType::CUMMEL;
//
//
//	bool isEqual = (e1 == e2);
//	bool isGay = (e1.mhealth == e2.mhealth && e1.mattackpower == e2.mattackpower && e1.mtype == e2.mtype); 
//
//	
//	cout << isEqual << endl;
//	cout << (e1 > e2) << endl;
//
//	++e1;
//
//	cout << e1.mhealth << " " << endl;
//	
//}