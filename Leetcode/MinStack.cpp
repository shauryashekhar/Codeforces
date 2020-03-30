class MinStack {
public:
    
    vector<int> stack;
    int minimum;
    
    /** initialize your data structure here. */
    MinStack() {
        minimum = INT_MAX;
    }
    
    void push(int x) {
        stack.insert(stack.begin(), x);
        if(x < minimum) {
            minimum = x;
        }
    }
    
    void pop() {
        int value = stack[0];
        stack.erase(stack.begin());
        if(value == minimum) {
            minimum = INT_MAX;
            for(int i = 0; i < stack.size(); i++) {
                if(stack[i] < minimum) {
                    minimum = stack[i];
                }
            }
        }
    }
    
    int top() {
        int result = stack[0];
        return result;
    }
    
    int getMin() {
        return minimum;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */