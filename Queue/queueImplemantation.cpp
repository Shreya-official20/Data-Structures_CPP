#include<iostream>

using namespace std;

class Queue{
    int* arr;
    int qfront;
    int rear;
    int size;

public:
    Queue(int size){
        this->size = size;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    bool isEmpty(){
        if(qfront == rear){
            return true;
        } else{
            return false;
        }
    }

    void push(int element){
        if(rear == size){
            cout<<"Queue is Full"<<endl;
        } else{
            arr[rear] = element;
            rear++;
        }
    }

    int pop(){
        if(qfront == rear){
            return -1;
        } else{
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront == rear){
                qfront = 0;
                rear = 0;
            }
            return ans;
        }
    }

    int front(){
        if(qfront == rear){
            return -1;
        } else{
            return arr[qfront];
        }
    }

};







