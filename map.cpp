#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

void mapSimple()
{
    map<int, string> map;
    map.emplace(3, "manish");
    map.emplace(5, "delamente");

    cout << map.size() << endl;
    
    cout << map[5] << endl; 

    for (const auto& pair : map) {
        cout << pair.first << " " << pair.second << endl;
    }
}

//int main()
//{
//    mapSimple();
//    return 0;
//}
