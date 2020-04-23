class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        if(arr.size() == 0) {
            return;
        }
        int size = arr.size();
        for(int i = 0; i < size; i++) {
            if(arr[i] == 0) {
                arr.insert(arr.begin() + i, 0);
                i++;
                arr.pop_back();
            }
        }
    }
};