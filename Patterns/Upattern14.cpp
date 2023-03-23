#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number:";
    cin>>n;
    int n1 = n/2;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==0 || i == n-1 || j == n-1 || j==0 || i==j || i+j == n-1 || j==4 || (i==2 && i==3 && i==4)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<""<<endl;
    }
}