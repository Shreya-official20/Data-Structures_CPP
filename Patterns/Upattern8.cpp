// hollow diamond in square
// * * * * * * * * * 
// * * * *   * * * * 
// * * *       * * * 
// * *           * * 
// *               * 
// * *           * * 
// * * *       * * * 
// * * * *   * * * * 
// * * * * * * * * * 

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number:";
    cin>>n;
    int n1 = n/2;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==0 || j==0 || i == n-1 || j == n-1 || i+j <= n1 || j >= n1+i || i-j >= n1 || j >= (n-1+n1)-i){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<""<<endl;
    }
}