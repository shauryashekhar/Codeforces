class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> result;
        if(arr.size() == 0) {
            return result;
        }
        int currentHighest = INT_MIN;
        for(int j = arr.size() - 1; j >= 0; j--) {
            if(j == arr.size() - 1) {
                result.insert(result.begin(), -1);
            } else {
                result.insert(result.begin(), currentHighest);
            }
            if(currentHighest < arr[j]) {
                currentHighest = arr[j];
            }
        }
        return result;
    }
};