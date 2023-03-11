// armstrong number >> 1*1*1 + 5*5*5 + 3*3*3 = 153
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;

    int original = n;
    int sum=0;

    while(n > 0){
        int remainder = n%10;
        sum += remainder*remainder*remainder;
        n = n/10;
    }
    if(original == sum){
        cout<<"Number is armstrong";
    }
    else{
        cout<<"Not an armstrong";
    }
    return 0;
}