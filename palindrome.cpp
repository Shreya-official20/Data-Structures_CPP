// palindrome or not
#include<iostream>
using namespace std;

int main(){

    int n, reverse=0, remainder, temp;

    cout<<"Enter number:";
    cin>>n;

    temp=n;                               // store original number to temp

    while(n != 0){
        remainder = n%10;
        reverse = reverse*10 + remainder;
        n = n/10;
    }
    if(temp == reverse){                   // compare reverse with original
        cout<<"Palindrome"<<endl;
    }
    else{
       cout<<"Not Palindrome"<<endl; 
    }
    return 0;
}