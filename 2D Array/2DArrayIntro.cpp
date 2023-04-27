#include<iostream>
#include <bits/stdc++.h>
using namespace std;

// search function
bool isPresent(int arr[][4], int target, int i, int j){
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){

            if(arr[i][j] == target){
                return 1;
            }
        }
    }
    return 0;
}

// to print row wise sum
void printRowSum(int arr[][4], int i, int j){
    for(int i=0; i<3; i++){
        int sum =0;
        for(int j=0; j<4; j++){
            sum += arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

// to print col wise sum
void printColSum(int arr[][4], int i, int j){
    for(int i=0; i<4; i++){
        int sum =0;
        for(int j=0; j<3; j++){
            sum += arr[j][i];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

// largest rowSum
int largestRowSum(int arr[][4], int i, int j){
    int maxi = INT_MIN;
    int rowIndex = -1;

    for(int i=0; i<3; i++){
        int sum = 0;
        for(int j=0; j<4; j++){
            sum += arr[i][j];
        }
        if(sum > maxi) { 
            maxi = sum;
            rowIndex = i;
        }
    }
    cout<<" the maximum sum is "<< maxi<<endl;
    return rowIndex;
}

int main(){
    //create 2d array
      int arr[3][4];

    // hardcode input
    // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
          
        //   o/p: 1 11 111 1111 
        //        2 22 222 2222 
        //        3 33 333 3333 
    // int arr[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};

    cout<<"Enter the elements "<<endl;
    // taking input -> row wise input
        // o/p:  1 2 3 4 
        //       5 6 7 8 
        //       9 10 11 12 

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }

    // taking input -> col wise input
        //    o/p: 1 4 7 10 
        //         2 5 8 11  
        //         3 6 9 12 

    // for(int i=0; i<4; i++){
    //     for(int j=0; j<3; j++){
    //         cin>>arr[j][i];
    //     }
    // }

    cout<<"Printing the array"<<endl;
    //print 
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<< " ";
        }
        cout<<endl;
    }

    // search a given element
    /*int target;
    cout<<"Enter the element to search "<<endl;
    cin>>target;

    if(isPresent(arr, target, 3, 4)){
        cout<<"Element found"<<endl;
    } else{
        cout<<"Not found" <<endl;
    }

    printRowSum(arr, 3, 4);
    printColSum(arr, 3, 4);
    */

    int ansIndex = largestRowSum(arr, 3, 4);
    cout<<"Max row is at index" << ansIndex <<endl;
    return 0;
}