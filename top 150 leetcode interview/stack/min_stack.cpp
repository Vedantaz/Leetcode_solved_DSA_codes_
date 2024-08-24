class MinStack {
public:
    stack<int> high ,low;
    MinStack() {
        low.push(INT_MAX);
    }

    void push(int val) {
        high.push(val);
        if(val <= low.top()){
            low.push(val);
        } 
    }
    
    void pop() {
        if(low.top() == high.top()) low.pop();
        high.pop();
    }
    
    int top() {
        return high.top();
    }
    
    int getMin() {
        return low.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

 //16 ms


 class MinStack {
public:
    stack<int> s;
    stack<int> mins;
    MinStack() {
        
    }
    
    void push(int val) {
        if(mins.empty() || mins.top()>=val){
            s.push(val);
            mins.push(val);
        }
        else
            s.push(val);
    }
    
    void pop() {
        if(s.top()==mins.top()){
            s.pop();
            mins.pop();
        }
        else
            s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return mins.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */ 

//  / // 0 ms

class MinStack {
public:
    stack<int> s;
    stack<int> mins;
    MinStack() {
        
    }
    
    void push(int val) {
        if(mins.empty() || mins.top()>=val){
            s.push(val);
            mins.push(val);
        }
        else
            s.push(val);
    }
    
    void pop() {
        if(s.top()==mins.top()){
            s.pop();
            mins.pop();
        }
        else
            s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return mins.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */