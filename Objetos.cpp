#include <iostream>
#include <string>

using namespace std;

// Definici�n de la clase Person
class Person 
{
    private:
        string name;
        int age;

    public:
        // Constructor con par�metros
        Person(const string& name, int age) 
        {
            this->name = name;
            this->age = age;
        }



    // M�todo para mostrar los datos de la persona
    void introduce() const 
    {
        cout << "Hola, mi nombre es " << name << " y tengo " << age << " anos." << endl;
    }

    // M�todo para cambiar la edad
    void setAge(int newAge) 
    {
        age = newAge;
    }

    // M�todo para obtener la edad
    int getAge() const 
    {
        return age;
    }
};

int main() 
{
    // Crear un objeto de la clase Person
    Person p1("Manish", 25);


    // Mostrar informaci�n del objeto
    p1.introduce();
    // Cambiar la edad y mostrar de nuevo
    p1.setAge(26);
    cout << "Despuas de cumplir aaos: ";
    p1.introduce();

    return 0;
}
