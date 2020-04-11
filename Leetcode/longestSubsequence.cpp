class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        if(arr.size() == 0) {
            return 0;
        }
        if(arr.size() == 1) {
            return 1;
        }
        int size = arr.size();
        int result[size];
        result[0] = 1;
        for(int i = 1; i < size; i++) {
            result[i] = 1;
            for(int j = 0; j < i; j++) {
                if(arr[i] - arr[j] == difference) {
                    result[i] = max(result[i], result[j] + 1);
                }
            }
        }
        int finalResult = 0;
        for(int k = 0; k < size; k++) {
            if(result[k] > finalResult) {
                finalResult = result[k];
            }
        }
        return finalResult;
    }
};