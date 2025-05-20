#include <unordered_set>
#include <iostream>
#include <vector>
#include <set>

using namespace std;

void SetSimple()
{
    //v1 & s1
    vector<string> v1 = { "Golfa", "Morena", "Cosa", "Elefanta", "Alta", "Yonki", "Elefanta", "Cosa" };
    set<string> s1;

    for (const string& a : v1)
    {
        s1.insert(a); //si es set ordena, si es unordered pues no LA COSAAAA
    }

    for (const string& key : s1)
    {
        cout << key << endl;
    }

    //v2 & s2
    vector<string> v2 = { "Morena2", "Palmer", "Pancha", "Sam", "Nerea", "Frentona", "Palmer"};
    set<string> s2;

    for (const string& a : v2)
    {
        s2.insert(a); 
    }

    for (const string& key : s2)
    {
        cout << key << endl;
    }

    //unir s1 con s2 y juntarlos
    set<string> s3 = s1; //union de los dos
    for (string key : s2)
    {
        s3.insert(key);
    } 
    
    for (const string& a : s3)
    {
        cout << a << ", ";
    }
    

    
}

int main()
{
    SetSimple();
    return 0;
}
