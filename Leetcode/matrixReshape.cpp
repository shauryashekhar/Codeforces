class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        vector<vector<int>> result;
        if(nums.size() == 0) {
            return result;
        }
        vector<int> tv;
        int rows = nums.size();
        int cols = nums[0].size();
        if(rows*cols != r * c) {
            return nums;
        }
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                tv.push_back(nums[i][j]);
            }
        }
        int pos = 0;
        for(int k = 0; k < r; k++) {
            vector<int> oneRow;
            for(int l = 0; l < c; l++) {
                oneRow.push_back(tv[pos]);
                pos++;
            }
            result.push_back(oneRow);
        }
        return result;
    }
};