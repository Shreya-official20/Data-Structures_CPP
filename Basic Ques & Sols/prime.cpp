// print all prime no till end of number
#include<iostream>
using namespace std;

int main(){
    int n;
    int count=0;
    cout<<"Enter number:";
    cin>>n;

    for(int i=2; i<=n; i++){
            count=0;
            for(int j=2; j<i; j++){
                if(i%j==0){
                    count++;
                    break;
                }
            }
            if(count==0){
                cout<<i<<endl;
            }

}
return 0;
}