#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;

    int n1 = (n+1)/2;
    int n2 = n-n1;
    
    //increasing
    for(int i=0; i<n1; i++){
        //space 
        for(int space=0; space < n1-i-1; space++){
            cout<<" ";
        }
        //text
        for(int text = 0; text < i+1; text++){
            if(text == 0 || text == i){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<"\n";
    }

    //decreasing
    for(int i=0; i<n2; i++){
        //space 
        for(int space=0; space < i+1; space++){
            cout<<" ";
        }
        //text
        for(int text = 0; text < n2-i; text++){
            if(text == 0 || text == n2-i-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<"\n";
    }
return 0;
}