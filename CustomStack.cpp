class CustomStack {
    vector<int> v;
    int size;
public:
    CustomStack(int maxSize) {
        size = maxSize;
    }
    
    void push(int x) {
        if(v.size() < size) {
            v.insert(v.begin(), x);
        }
    }
    
    int pop() {
        if(v.size() > 0) {
            int returnValue = v[0];
            v.erase(v.begin());
            return returnValue;
        } else {
            return -1;
        }
    }
    
    void increment(int k, int val) {
        int size = v.size();
        // showArray();
        if(size < k) {
            for(int i = 0; i < size; i++) {
                v[i] = v[i] + val;
            }
        } else {
            for(int i = 0; i < k; i++) {
                v[size-1-i] = v[size-1-i] + val;
            }
        }
    }
    
    void showArray() {
        for(int x : v) {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */