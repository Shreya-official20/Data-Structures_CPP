#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;

    // increasing
    for(int i=0; i<n; i++){
        //space
        for(int space = 0; space < n-i-1; space++){
            cout<<" ";
        }
        //text 
        for(int text = 0; text < i+1; text++){
            cout<<"*";
        }
        cout<<"\n";
    }

    // decreasing
    for(int i=0; i<(n-1); i++){
        //space
        for(int space = 0; space < i+1; space++){
            cout<<" ";
        }
        //text 
        for(int text = 0; text < n-i-1; text++){
            cout<<"*";
        }
        cout<<"\n";
    }
return 0;
}