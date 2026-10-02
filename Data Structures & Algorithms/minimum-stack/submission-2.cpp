class MinStack {
    stack<int> myStack;
    stack<int> minStack;

public:
    MinStack() {
        
    }
    
    void push(int val) {
        myStack.push(val);
        if(minStack.empty())
        {minStack.push(val);}
        else{
            int currentMin=min(val,minStack.top());
            minStack.push(currentMin);
        }
    }
    
    void pop() {
        myStack.pop();
        minStack.pop();
    }
    
    int top() {
      return  myStack.top();
    }
    
    int getMin() {
        return minStack.top();
        
    }
};
