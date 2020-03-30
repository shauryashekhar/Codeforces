class MyHashMap {
    int array[1000000];
public:
    /** Initialize your data structure here. */
    MyHashMap() {
        memset(array, -1, sizeof(array));
    }
    
    /** value will always be non-negative. */
    void put(int key, int value) {
        array[key] = value;
    }
    
    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
        if(array[key] == INT_MAX) {
            return -1;
        } else {
            return array[key];
        }
    }
    
    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
        array[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */