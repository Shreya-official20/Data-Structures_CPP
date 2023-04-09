//code to see how to print unordered_map

#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<string, int> map;

    map.insert({"S", 1});
    map.insert({"H", 1});
    map.insert({"R", 1});
    map.insert({"E", 1});
    map.insert({"Y", 1});
    map.insert({"A", 1});

    //another way of inserting
    map["U"] = 2;
    map["k"];         // by default it will give 0

    // return value for the specified key
    // can't return key from value >> it's not possible
    cout<<map["U"]<<endl;

    //another method to return value
    cout<<map["U"]<<endl;

    //remove elements
    map.erase("U");

    for (auto keyValue : map)
    {
        string key = keyValue.first;
        int value = keyValue.second;
        cout << key << " " << value << endl;
    }

}