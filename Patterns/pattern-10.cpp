// star pyramid pattern

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number:";
    cin>>n;

    int space = n/2;
    int star = 1;

    for(int i =1; i<=n; i++){
        for(int j =1; j<=space; j++){
            cout<<"-";
        }
        for(int j =1; j<=star; j++){
            cout<<"*";
        }
        if(i <= n/2){
            star += 2;
            space--;
        }
        else{
            space++;
            star -= 2;
        }
        cout<<endl;
    }
}