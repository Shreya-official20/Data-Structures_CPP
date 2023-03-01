#include<iostream>
using namespace std;

int main(){

    // for(int i=1; i<=5; i++){                                    // print number 1 to 5   
    //     cout<<i<<endl;
    // }

    // for(int i=1; i<=5; i++){                                   // print name for 5 times  
    //      cout<<"Shreya"<<endl;
    // }

       int N;                                                     // sum of first N natural numbers
       cout<<"Enter Number:";
       cin>>N;

       int sum=0;
       for(int i=1; i<=N; i++){
        sum += i;
       }
       cout<<sum<<endl;

       return 0;
}