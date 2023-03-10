#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;

    for(int i=0; i<n; i++){
        //space
        for(int space = 0; space < i; space++){
            cout<<" ";
        }
        //text 
        for(int text = 0; text < (n-i); text++){
            cout<<"* ";
        }
        cout<<"\n";
    }

return 0;
}