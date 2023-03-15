//find nearest element of data

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int nearestElement(vector<int> &arr, int data){
    int n = arr.size();
    int si = 0;               // start index
    int ei = n-1;             // end index

    while(si<=ei){
        int mid = (si + ei)/2;              //find mid of array
        if(arr[mid] == data){
            return mid;
        } else if(arr[mid] > data){
            ei = mid-1;
        } else {
            si = mid+1;
        }
    }
    return ((arr[si]-data) > (data-arr[ei])? ei : si);
}

int main(){

    vector<int>arr = {1,3,12,14,23,34,55,65,75,78};
    int data = 20;                                       
// int n; 
//     cin>>n; 
//     int a;
//     vector<int> v;
//     for(int i=0 ; i<n ; i++)
//     {
//         cin>>a;
//         v.push_back(a);
//     }
    cout<<nearestElement(arr, data)<<endl;
    
}