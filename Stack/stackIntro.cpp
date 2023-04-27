#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main(){
    stack<string>names;

    // push element in stack
    names.push("Shreya");
    names.push("Utkarsh");
    names.push("Shaurya");
    // remove last elements of stack
    names.pop();

    // display top element in stack
    cout<< names.top()<<endl;

    // display size of stack
    cout<< names.size()<<endl;

    if(names.empty()){
        cout<<"Stack is empty"<<endl;
    } else{
        cout<<"Stack is not empty"<<endl;
    }

}