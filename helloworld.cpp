#include<iostream>
using namespace std;
 int main(){
int number;
cout<<"Number:";
cin>>number;

if(number>0){
    cout<<"Number is +ve"<<endl;
}
else if(number<0){
    cout<<"Number is -ve"<<endl;
}
else{
    cout<<"Number is Zero";
}
return 0;
}