//code to store indexes

#include <iostream>
#include<vector>
#include <unordered_map>

using namespace std;

void indexesMap(string &s){
    unordered_map<char, vector<int>> map;

     for(int i = 0; i<s.length(); i++){
        char ch = s[i];
        map[ch].push_back(i);
     } 

     for (auto keyValue : map)
    {
        cout<<keyValue.first<<"->";
         for(int ele : keyValue.second){
            cout<<ele<<" ";
         }
         cout<<endl;
    }
    return;        

}

int main()
{
    string s = "sdcgdkjflgeewiruoenbcxn";
    indexesMap(s);

}