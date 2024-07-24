#include<iostream>
#include<queue>
using namespace std;

int main(){
    // create a queue
    queue<int> q;

    q.push(12);
    q.push(12);
    q.push(1);

    cout<<q.size()<<endl;

    q.pop();

    cout<<q.size()<<endl;

    cout<<q.front()<<endl;

    q.pop();
    q.pop();

    if(q.empty()){
        cout<<"1"<<endl;
    }
    return 0;
}