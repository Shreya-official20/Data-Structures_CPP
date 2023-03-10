// add 2 arrays

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void addTwoArrays(vector<int> &a, vector<int> &b){
    int n = a.size();
    int m = b.size();

    vector<int>res(max(n,m)+1, 0);

    int i = n-1;
    int j = m-1;
    int k = res.size() - 1;

    int carry = 0;
    while(k >= 0){
        int sum = carry;
        if(i >= 0){
            sum+=a[i];
            i--;
        }
        if(j >= 0){
            sum+=b[j];
            j--;
        }

        res[k] = sum%10;
        k--;
        carry = sum/10;
    }

    for(int i=0;i<res.size(); i++){
        cout<<res[i]<<" ";
    }

    return;
}

int main(){
    vector<int>arr1 = {1,2,3,4};
    vector<int>arr2 = {3, 4,5};

    addTwoArrays(arr1, arr2);
}
