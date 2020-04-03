class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        if(arr.size() == 0) {
            return false;
        }
        for(int i = 0; i < arr.size(); i++) {
            for(int j = 0; j < arr.size(); j++) {
                if(i != j) {
                    if(arr[i] == 2 * arr[j]) {
                        return true;
                    } else if(arr[j] == 2 * arr[i]) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};