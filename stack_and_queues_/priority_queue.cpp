// special designed queue so that it have highest element at the front and lowest element at the back of the array .

// by default cpp creates a max-heap for priority queue

// element are in the non-increasing order..



#include <iostream>
#include <queue>
using namespace std;


void show(priority_queue<int> que){
    priority_queue<int> q = que;
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();

    }
    cout<<endl;

}

int main(){
    priority_queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    show(q);
    cout<<"front of the queue is : "<<q.top()<<endl;
    cout<<"size of the queue is : "<<q.size()<<endl;

    q.pop();
    show(q);
    cout<<"front of the queue is : "<<q.top()<<endl;
    cout<<"size of the queue is : "<<q.size()<<endl;
    // cout<<"rear of the queue is : "<<q.back()<<endl;
    
    // internally creating max_heap..


    return 0;
}