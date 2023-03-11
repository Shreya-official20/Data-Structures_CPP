// counts of digits

#include<iostream>
using namespace std;

int main(){
    int num;
    int count=0;

    cout<<"Enter digits:";
    cin>>num;

    while(num!=0){
        num/=10;
        count++;
    }
    cout<<count<<endl;
    return 0;
}