//code to return frequency of given string

#include <iostream>
#include <unordered_map>

using namespace std;

void frequency(string &s){
    unordered_map<char, int> map;
    for (char ch : s)
    {
        map[ch]++;
    }
    
    for (auto keyValue : map)
    {
        char key = keyValue.first;
        int value = keyValue.second;
        cout << key << " " << value << endl;
    }
    return;
}

int main()
{
    string s = "sdcgdkjflgeewiruoenbcxn";
    frequency(s);

}