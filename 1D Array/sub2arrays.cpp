#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void subTwoArrays(vector<int> &a, vector<int> &b){
    int n = a.size();
    int m = b.size();
    int i = n-1;
    int j = m-1;
    vector<int>ans(max(n,m), 0);
    int k = ans.size() - 1;

    int borrow = 0;
    while(k>=0){
        int diff = borrow;
        if(i>=0){
            diff+=a[i];
            i--;
        } 
        if(j>=0){
            diff-=b[j];
            j--;
        }
        if(diff<0){
            diff+=10;
            borrow = -1;
        } else {
            borrow = 0;
        }
        ans[k] = diff;
        k--;
    }

    for(int i=0;i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }


}

int main(){
    vector<int>arr1 = {1,2,3,4};
    vector<int>arr2 = {9,9};

    subTwoArrays(arr1, arr2);
}