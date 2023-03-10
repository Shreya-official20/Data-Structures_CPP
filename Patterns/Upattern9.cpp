// print character using ASCII value  >> starts from A: 65......
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;

    for(int i=0; i<n; i++){
        //space
        for(int space = 0; space < (n-i-1); space++){
            cout<<" ";
        }
        //text
        for(int text = 65; text < (i+65+1); text++){
            cout<<(char)text + " ";
        }
        cout<<"\n";
    }
    return 0;
}