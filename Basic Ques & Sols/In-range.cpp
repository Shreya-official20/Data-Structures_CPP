#include<iostream>
using namespace std;

int main(){
    int N;
    cout<<"Number:"<<endl;
    cin>>N;

    if(N >= 1 && N <= 100){
        cout<<"Number is in Range"<<endl;
    }
    else{
        cout<<"Not in range";
    }
return 0;
}