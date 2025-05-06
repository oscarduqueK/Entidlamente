#include <iostream>
#include <cstdlib>
#include <ctime>

#include <stack> //obligatoria para usar stack

using namespace std;

class MiStack 
{
private:
    std::stack<int> pila;

public:
    // C - Create: insertar un elemento
    void insertar(int valor) 
    {
        pila.push(valor);
        std::cout << "Insertado: " << valor << std::endl;
    }

    // R - Read: leer el elemento del tope
    void leer() 
    {
        if (!pila.empty()) 
        {
            std::cout << "Elemento en el tope: " << pila.top() << std::endl;
        }
        else 
        {
            std::cout << "La pila está vacía.\n";
        }
    }

    // D - Delete: eliminar el elemento del tope
    void eliminar() 
    {
        if (!pila.empty()) 
        {
            std::cout << "Eliminando: " << pila.top() << std::endl;
            pila.pop();
        }
        else 
        {
            std::cout << "Nada que eliminar, la pila está vacía.\n";
        }
    }

    // Saber si la pila está vacía
    bool estaVacia() 
    {
        return pila.empty();
    }

    // Obtener el tamaño de la pila
    void tamano() 
    {
        std::cout << "Tamaño actual de la pila: " << pila.size() << std::endl;
    }
};

void Stack()
{
    stack<int> pila;
    int opcion, valor;

    do {
        cout << "\n===== MENU DE PILA =====\n";
        cout << "1. Insertar elemento\n";
        cout << "2. Leer elemento del tope\n";
        cout << "3. Eliminar elemento del tope\n";
        cout << "4. Mostrar tamaño\n";
        cout << "5. ¿Está vacía?\n";
        cout << "0. Salir\n";
        cout << "Opción: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            cout << "Ingrese valor a insertar: ";
            cin >> valor;
            pila.push(valor);
            cout << "Elemento insertado.\n";
            break;

        case 2:
            if (!pila.empty()) {
                cout << "Elemento en el tope: " << pila.top() << endl;
            }
            else {
                cout << "La pila está vacía.\n";
            }
            break;

        case 3:
            if (!pila.empty()) {
                cout << "Eliminando: " << pila.top() << endl;
                pila.pop();
            }
            else {
                cout << "No hay elementos para eliminar.\n";
            }
            break;

        case 4:
            cout << "Tamaño actual: " << pila.size() << endl;
            break;

        case 5:
            cout << (pila.empty() ? "Sí, está vacía.\n" : "No, contiene elementos.\n");
            break;

        case 0:
            cout << "Saliendo del programa.\n";
            break;

        default:
            cout << "Opción no válida. Intente de nuevo.\n";
        }

    } while (opcion != 0);
}

//void main()
//{
//    MiStack miPila;
//
//    miPila.insertar(10);
//    miPila.insertar(20);
//    miPila.insertar(30);
//
//    miPila.leer();    // Muestra el elemento en el tope (30)
//
//    miPila.eliminar(); // Elimina el 30
//
//    miPila.leer();    // Ahora el tope es 20
//
//    miPila.tamano();  // Muestra el tamaño de la pila
//
//    Stack(); //funcion para interactuar con un Stack
//}