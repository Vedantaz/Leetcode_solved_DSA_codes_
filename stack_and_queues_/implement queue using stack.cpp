class MyQueue {
public:
    stack<int> ip , op;

    MyQueue() {
        
    }
    
    void push(int x) {
        ip.push(x);
        //q.push(x);
        
    }
    
    int pop() {
        int val = peek();
        op.pop();
        return val;
    }
    
    int peek() {
        if(op.empty()){
            while(ip.empty() == false){
                op.push(ip.top());
                ip.pop();

            }
        }
        return op.top();
    }
    
    bool empty() {
        return ip.empty() && op.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */