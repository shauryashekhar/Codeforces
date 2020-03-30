class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> left;
        vector<int> right;
        vector<int> result;
        if(nums.size() == 0) {
            return result;
        }
        left.push_back(1);
        for(int i = 1; i < nums.size(); i++) {
            left.push_back(left[i-1] * nums[i-1]);
        }
        // cout<<"LEFT"<<endl;
        // for(int z = 0; z < left.size(); z++) {
        //     cout<<left[z]<<" ";
        // }
        // cout<<endl;
        right.push_back(1);
        for(int j = nums.size() - 2; j >= 0; j--) {
            int toBeInserted = nums[j+1] * right[0];
            right.insert(right.begin(), toBeInserted);
        }
        // cout<<"RIGHT"<<endl;
        // for(int z = 0; z < right.size(); z++) {
        //     cout<<right[z]<<" ";
        // }
        // cout<<endl;
        for(int l = 0; l < nums.size(); l++) {
            result.push_back(left[l] * right[l]);
        }
        return result;
    }
};