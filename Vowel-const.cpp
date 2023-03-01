#include<iostream>
using namespace std;

int main(){
    char c;
    cout<<"Character:"<<endl;
    cin>>c;

    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        cout<<"vowel"<<endl;
    }
    else{
        cout<<"const";
    }
    return 0;
}