class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int size = arr.size();
        int i;
        for(i = 0; i < size; i++){
            if(arr[i] == 0) {
                arr.insert(arr.begin() + i, 0);
                i = i+1;
            }
        }
        arr.erase(arr.begin() + i, arr.end());
    }
};