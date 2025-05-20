#include <iostream>
#include <list>
using namespace std;

void List()
{
    // Crear una lista de enteros
    list<int> numeros;

    // Insertar elementos
    numeros.push_back(10);  // Añade al final
    numeros.push_back(20);
    numeros.push_front(5);  // Añade al principio

    cout << "Elementos en la lista: ";
    for (int n : numeros) {
        cout << n << " ";
    }
    cout << endl;

    // Eliminar un elemento
    numeros.remove(10);  // Elimina todas las ocurrencias de 10

    cout << "Después de eliminar 10: ";
    for (int n : numeros) {
        cout << n << " ";
    }
    cout << endl;

    // Insertar con iteradores
    auto it = numeros.begin();
    advance(it, 1);  // Mover el iterador a la segunda posición
    numeros.insert(it, 15);  // Insertar 15 en la segunda posición

    cout << "Después de insertar 15: ";
    for (int n : numeros) {
        cout << n << " ";
    }
    cout << endl;
}

void ListInsertErase()
{
        list<int> numbers = { 1, 2, 3, 4, 5 };

        cout << "Lista inicial: ";
        for (int num : numbers) {
            cout << num << " ";
        }
        cout << endl;

        // Insertar un elemento en la segunda posición
        auto it = numbers.begin();
        advance(it, 1); // Avanza al segundo elemento
        numbers.insert(it, 10);

        cout << "Lista después de insertar 10 en la segunda posición: ";
        for (int num : numbers) {
            cout << num << " ";
        }
        cout << endl;

        // Eliminar el tercer elemento
        it = numbers.begin();
        advance(it, 2); // Avanza al tercer elemento
        numbers.erase(it);

        cout << "Lista después de eliminar el tercer elemento: ";
        for (int num : numbers) {
            cout << num << " ";
        }
        cout << endl;
}

struct Node {
    int data;
    Node* next;
};

void ListConNodos()
{
    Node* head = nullptr;

    auto insert = [](Node*& head, int value, int position) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;

        if (position == 0) {
            newNode->next = head;
            head = newNode;
        }
        else {
            Node* current = head;
            for (int i = 0; i < position - 1 && current != nullptr; i++) {
                current = current->next;
            }
            if (current != nullptr) {
                newNode->next = current->next;
                current->next = newNode;
            }
        }
        };

    auto erase = [](Node*& head, int position) {
        if (head == nullptr) return;

        if (position == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* current = head;
        for (int i = 0; i < position - 1 && current->next != nullptr; i++) {
            current = current->next;
        }
        if (current->next != nullptr) {
            Node* temp = current->next;
            current->next = temp->next;
            delete temp;
        }
        };

    auto display = [](Node* head) {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "nullptr" << endl;
        };

    // Inserciones
    insert(head, 1, 0);
    insert(head, 2, 1);
    insert(head, 3, 2);
    insert(head, 10, 1);

    cout << "Lista después de inserciones: ";
    display(head);

    // Eliminación
    erase(head, 2);

    cout << "Lista después de eliminar la posición 2: ";
    display(head);
}

int main() 
{
    List();
    ListInsertErase();
    return 0;
    ListConNodos();
}
