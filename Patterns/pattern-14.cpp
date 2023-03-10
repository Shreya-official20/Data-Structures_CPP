#include<iostream>
using namespace std;

int main(){

int n;
cout<<"Enter Number:";
cin>>n;

int space = 0;
int star = n;

for(int i=1; i<=n; i++){
    for(int j=1; j<=space; j++){
        cout<<" ";
    }
    for(int j=1; j<=star; j++){
        cout<<"*";
    }
    if(i <= n/2){
        star -= 2;
        space += 1;
    }
    else{
        star += 2;
        space -= 1;
    }
    cout<<"\n";
}
return 0;
}