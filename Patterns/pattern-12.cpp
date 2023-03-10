// number pyramid pattern

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number:";
    cin>>n;

    int space = n/2;
    int num = 1;
    int val = 1;

    for(int i =1; i<=n; i++){
        for(int j =1; j<=space; j++){
            cout<<"-";
        }
        int temp = val;
        for(int j =1; j<=num; j++){
            cout<<temp;
            if(j <= num/2){
                temp++;
            }
            else{
                temp--;
            }
        }
        if(i <= n/2){
            num += 2;
            space--;
            val++;
        }
        else{
            space++;
            num -= 2;
            val--;
        }
        cout<<endl;
    }
}