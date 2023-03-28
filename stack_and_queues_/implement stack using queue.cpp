class MyStack {
public:
    queue<int> q, q2;

    MyStack() {
        
    }
    
    void push(int x) {
        while(!q.empty()){

        
        q2.push(q.front());
        q.pop();

       
        }
        q.push(x);


        while(!q2.empty()){
            q.push(q2.front());
            q2.pop();

        }


    }
    
    int pop() {
        int val = q.front();
        q.pop();
        return val;

    }
    
    int top() {
        return q.front();

    }
    
    bool empty() {
        return true ? q.empty() : false;

    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */