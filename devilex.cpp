#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void Devilbao() 
{
	enum class DevilType {
		FIRE,
		AIR,
		ICE,
		EARTH
	};

	struct Devil {
		int vida;
		DevilType dt;
	};

	struct Overlord {
		long id;
		int magia;
		int vida;
		Devil diablos;

		Devil* numdevils = nullptr;
		int devilSize = 0;

		void AddDevil(const Devil& devil)
		{
			++devilSize;
		}


	};
}

void ArraysDinamicosgpt()
{
	int n;
	cout << "Cuantos nameros quieres guardar: ";
	cin >> n; //cantidad de numeros que vamos a guardar

	// Declaracion y creacion de array dinámico
	int* array = new int[n]; // Reservamos memoria para n enteros 



	// Llenamos el array
	for (int i = 0; i < n; ++i) 
	{
		cout << "Ingresa el numero " << i + 1 << ": "; //el i + 1 este es para decir: ingresa el numero 1, 2, 3, 4 etc.
		cin >> array[i];
	}

	// Mostramos el array
	cout << "Numeros ingresados: " << endl;
	for (int i = 0; i < n; ++i) 
	{
		cout << array[i] << " "; 
	}



	// Liberamos la memoria
	delete[] array; 
}

void ArraysDinagays()
{
	/*
		¿Cuántos estudiantes hay ? : 4
		Calificación del estudiante 1 : 75
		Calificación del estudiante 2 : 58
		Calificación del estudiante 3 : 90
		Calificación del estudiante 4 : 42

		Calificaciones ingresadas : 75 58 90 42
		Promedio general : 66.25
		Estudiantes aprobados : 2
	*/

	//preguntar alumnos e inicio
	int a;
	cout << "Cuantos estudiantes: " << endl;
	cin >> a;

	int* estudiantes = new int[a];

	//Poner nota a cada uno i ponerlo por consola
	for (int i = 0; i < a; i++)
	{
		estudiantes[i] = rand() % 101;
		cout << "La nota del estudiante es: " << estudiantes[i] << endl; 
	}

	//hacer promedio usando el numero que nos piden
	int promedio = 0; 
	for (int i = 0; i < a; i++)
	{
		promedio += estudiantes[i];
	}
	promedio = promedio / a;
	cout << "La nota media es la siguiente: " << promedio << endl; 
	
	delete[] estudiantes; 

}

void ResizeDeAgays()
{
	
	//pedir numeros rusticos
	int n;
	cout << "Cuntos nmeros vas a meter: ";
	cin >> n;

	//crear ints que supondran los tamaños y el array
	int capacidad = 2;
	int cantidad = 0;
	int* numeros = new int[capacidad];

	for (int i = 0; i < n; i++) 
	{
		// Redimensionar si no hay espacio
		if (cantidad == capacidad) //si la cantidad ya llega a la capacidad se dobla el espacio con otro array
		{
			capacidad *= 2; //se multiplica la capacidad
			//se crea un nuevo array con la nueva capacidad
			int* nuevo = new int[capacidad];

			for (int j = 0; j < cantidad; j++) 
			{
				nuevo[j] = numeros[j]; //recorre el nuevo poniendole los del antiguo, recorriendolo tambien
			}

			delete[] numeros;
			numeros = nuevo;
		}

		// Ingresar número
		cout << "Numero #" << i + 1 << ": ";
		cin >> numeros[cantidad];
		cantidad++;
	}

	// Mostrar resultados
	cout << "Numeros ingresados :" << endl;
	int suma = 0, pares = 0;
	for (int i = 0; i < cantidad; i++) {
		cout << numeros[i] << " ";
		suma += numeros[i];
		if (numeros[i] % 2 == 0) pares++;
	}
}

void RedimensionDeAgays()
{
	/*
		¿Cuántos números quieres ingresar?: 5
		Número #1: 12
		Número #2: 7
		Número #3: 18
		Número #4: 5
		Número #5: 30

		Números ingresados: 12 7 18 5 30
		Múltiplos de 3: 3
		Número mayor: 30
	*/

	//LA COSA es que forzamos al codigo a superar el limite poniendole cinco y asi se rehace un array nuevo y rustico

	//preguntita de mierda
	int b;
	cout << "Cuantos numeros; " << endl;
	cin >> b;

	//declaracion de cantidades 
	int capacidad = 3;
	int ingresados = 0;

	//declaracion del array inicial
	int* array = new int[3];

	for (int i = 0; i < b; i++)
	{
		if (ingresados >= capacidad)   
		{
			int newcapacidad = capacidad * 2; //la duplicamos
			int* nuevo = new int[newcapacidad]; 
			
			for (int j = 0; j < ingresados; j++) 
			{
				nuevo[j] = array[j];
			}

			delete[] array;
			array = nuevo; 
			capacidad = newcapacidad;    
		}

		// Ingresar número 
		cout << "Numero #" << i + 1 << ": ";
		cin >> array[ingresados];  
		ingresados++;  
	}

	// Mostrar resultado para probar que funciona
	cout << "Numeros ingresados :" << endl; 
	
	for (int i = 0; i < ingresados; i++) 
	{
		cout << array[i] << " ";
	}
}

//void main()  
//{
//	//poner numeros randoms
//	srand(time(NULL));
//
//	//Ejercicio propuesto por manish de la mente
//	//Devilbao();
//
//	//Ejercicio para que nos pregunte el tamaño de un array y llenarlo
//	//ArraysDinamicosgpt();  
//
//	//lo mismo pero lo he hecho yo con un enunciado de gpt
//	//ArraysDinagays(); 
//
//	//Resize de los arrays, lo que es basicaMENTE un vector pero a mano
//	//Para redimensionar un array hay que crear el original y uno nuevo con mas espacio
//	//Luego se copia de uno a otro y se elimina el viejo, asi constanteMENTE
//	//ResizeDeAgays();
//
//	//lo mismo pero lo he hecho yo con un enunciado de gpt
//	//En este problema nos dan un tamaño definido y al preguntarnos y decir un numero mas grande que ese, obligamos al codigo a redimensionar el array
//	//De este modo cuando lo redimensionamos creamos un nuevo array, una nueva capacidad y pasamos los datos de uno a otro
//	RedimensionDeAgays();
//}

