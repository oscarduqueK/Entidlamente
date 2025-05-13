#include <iostream>
#include <list>
using namespace std;

int main() {
    // Crear una lista de enteros
    list<int> numeros;

    // Insertar elementos
    numeros.push_back(10);  // A�ade al final
    numeros.push_back(20);
    numeros.push_front(5);  // A�ade al principio

    cout << "Elementos en la lista: ";
    for (int n : numeros) {
        cout << n << " ";
    }
    cout << endl;

    // Eliminar un elemento
    numeros.remove(10);  // Elimina todas las ocurrencias de 10

    cout << "Despu�s de eliminar 10: ";
    for (int n : numeros) {
        cout << n << " ";
    }
    cout << endl;

    // Insertar con iteradores
    auto it = numeros.begin();
    advance(it, 1);  // Mover el iterador a la segunda posici�n
    numeros.insert(it, 15);  // Insertar 15 en la segunda posici�n

    cout << "Despu�s de insertar 15: ";
    for (int n : numeros) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
