// find quotient and remainder
#include<iostream>
using namespace std;

int main(){

    int a, b;                        // a >> divisor, b >> dividend

    cout<<"Divisor:";
    cin>>a;
    cout<<"Dividend:";
    cin>>b;

    int Q = b/a;                     // Q >> quotient, R >> remainder
    int R = b%a;

    cout<<Q<<endl;
    cout<<R<<endl;

    return 0;

}