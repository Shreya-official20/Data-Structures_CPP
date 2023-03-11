// print narcistic numbers >> power will be equals to length of digits >> 9474 = 9^4 + 4^4 + 7^4 + 4^4;

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int original=n;
    int final = original;
    int sum=0;
    int count=0;
    
    while(original != 0){
        original /= 10;
        count++;
    }
    
    while(n > 0){
        int remainder= n%10;
        sum += pow(remainder, count);
        n /= 10;
    }
    if(final == sum){
        cout<<"NARCISTIC NUMBER";
    }
    else{
        cout<<"NOT NARCISTIC";
    }
    return 0;
    
}