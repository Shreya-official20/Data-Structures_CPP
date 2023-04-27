#include<iostream>
#include<queue>

using namespace std;

int main(){
    // queue<type>que;
    queue<string>que;

    que.push("Shreya");
    que.push("Singh");

    cout<<que.back()<<endl;
    cout<<que.size()<<endl;

    while(!que.empty()){
        cout<<que.front()<<" ";
        que.pop();
    }
    return 0;
}