#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

class PilaNodos {
private:
    Nodo* tope;

public:
    PilaNodos() : tope(nullptr) {}

    void push(int valor) {
        Nodo* nuevo = new Nodo{ valor, tope };
        tope = nuevo;
        cout << "Insertado: " << valor << endl;
    }

    void pop() {
        if (tope != nullptr) {
            cout << "Eliminando: " << tope->dato << endl;
            Nodo* temp = tope;
            tope = tope->siguiente;
            delete temp;
        }
        else {
            cout << "Pila vacía.\n";
        }
    }

    void top() {
        if (tope != nullptr) {
            cout << "Tope: " << tope->dato << endl;
        }
        else {
            cout << "Pila vacía.\n";
        }
    }

    bool empty() {
        return tope == nullptr;
    }
};

void main() {
    PilaNodos pila;
    int opcion, valor;

    do {
        cout << "\n===== MENU PILA CON NODOS =====\n";
        cout << "1. Insertar elemento\n";
        cout << "2. Mostrar tope\n";
        cout << "3. Eliminar tope\n";
        cout << "4. ¿Está vacía?\n";
        cout << "0. Salir\n";
        cout << "Opción: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            cout << "Valor a insertar: ";
            cin >> valor;
            pila.push(valor);
            break;
        case 2:
            pila.top();
            break;
        case 3:
            pila.pop();
            break;
        case 4:
            cout << (pila.empty() ? "Sí, está vacía.\n" : "No, contiene elementos.\n");
            break;
        case 0:
            cout << "Saliendo del programa...\n";
            break;
        default:
            cout << "Opción no válida.\n";
        }
    } while (opcion != 0);
}