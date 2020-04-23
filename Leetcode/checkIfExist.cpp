class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        if(arr.size() == 0 || arr.size() == 1) {
            return false;
        }
        multiset<int> s;
        int c0 = 0;
        for(int x : arr) {
            if(x == 0) {
                c0++;
            }
            s.insert(x);
        }
        for(int i : arr) {
            if(i == 0 && c0 > 1) {
                return true;
            } else if(i != 0 && s.count(i*2)) {
                return true;
            }
        }
        return false;
    }
};