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
            std::cout << "La pila est� vac�a.\n";
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
            std::cout << "Nada que eliminar, la pila est� vac�a.\n";
        }
    }

    // Saber si la pila est� vac�a
    bool estaVacia() 
    {
        return pila.empty();
    }

    // Obtener el tama�o de la pila
    void tamano() 
    {
        std::cout << "Tama�o actual de la pila: " << pila.size() << std::endl;
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
        cout << "4. Mostrar tama�o\n";
        cout << "5. �Est� vac�a?\n";
        cout << "0. Salir\n";
        cout << "Opci�n: ";
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
                cout << "La pila est� vac�a.\n";
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
            cout << "Tama�o actual: " << pila.size() << endl;
            break;

        case 5:
            cout << (pila.empty() ? "S�, est� vac�a.\n" : "No, contiene elementos.\n");
            break;

        case 0:
            cout << "Saliendo del programa.\n";
            break;

        default:
            cout << "Opci�n no v�lida. Intente de nuevo.\n";
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
//    miPila.tamano();  // Muestra el tama�o de la pila
//
//    Stack(); //funcion para interactuar con un Stack
//}