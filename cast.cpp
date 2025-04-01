#include <iostream>
using namespace std;

struct Apple
{
	int a = 0;
	string color;
};

struct Peer
{
	int b = 0;
	
};

//const Apple* getApple(Apple* apel)
//{
//	
//}

int main()
{
	//statics cast que van mal

	////esta conversion no genera warnings por el static cast
	//double myDoubleCpp = 1.58;
	//int myInt = static_cast<int>(myDoubleCpp);

	////al devolverlo habielndolo hecho bien no saca warnings
	//double myDoubleCpp = myInt;

	//
	//const float myfloat = 1.0f;

	//float myfloatnonconst = const_cast<float&> (myfloat); 

	////myfloatnonconst = myfloat;

	////myfloat = 3.0f;   


	//casteo de punteros
	Apple* apple = new Apple(); 
	Peer* peer = new Peer();

	Apple* peer2 = reinterpret_cast<Apple*>(peer);

	apple->color = "RED";
}

