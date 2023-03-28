


#include <iostream>
#include <queue>
using namespace std;


void show(queue<int> que){
    queue<int> q = que;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();

    }

}

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    show(q);
    cout<<"size of the queue is : "<<q.size()<<endl;
    cout<<"front of the queue is : "<<q.front()<<endl;
    cout<<"rear of the queue is : "<<q.back()<<endl;
    
    

    return 0;
}