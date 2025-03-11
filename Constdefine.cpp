#include <iostream>
#include <cstdlib>

using namespace std;

#define A 5;
//scope

#ifdef DEBUG_ENABLE
void print(int b)
{
	cout << b << endl; 
}
#endif 

int fooc() 
{
	const int b = 5;
	return b;
}

#define square(x)(x*x)

int SquareFunction(int x)
{
	return x*x;
}

int main() 
{
	const int b = 10;
#ifdef DEBUG_ENABLE
	print(b);
#endif

	//le pasamos el 3 ahi dentro del parentesis
	cout << SquareFunction(10) << endl;
	cout << square(10) << endl; 

	//probamos otra manera
	int a = 3;
	//cout << SquareFunction(++a) << endl; 
	cout << square(++a) << endl; 

}