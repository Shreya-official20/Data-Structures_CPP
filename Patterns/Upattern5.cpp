#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int n2 = (n-1);

   //increasing
    for(int i=0; i<n; i++){
        //space
        for(int space = 0; space < i; space++){
            cout<<" ";
        }
        //text
        for(int text = 0; text < (n-i); text++){
            cout<<"* ";
        }
        cout<<"\n";
    }

    //decreasing
    for(int i=0; i<n2; i++){
        //space
        for(int space = 0; space < (n2-i-1); space++){
            cout<<" ";
        }
        //text
        for(int text = 0; text < (i+2); text++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}