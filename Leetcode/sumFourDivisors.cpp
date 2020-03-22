class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int count = 0;
        if(nums.size() == 0) {
            return 0;
        }
        for(int i = 0; i < nums.size(); i++) {
            int number = nums[i];
            vector<int> v;
            for(int j = 1; j <= sqrt(number); j++) {
                if(number % j == 0) {
                    if(number / j == j) {
                        v.push_back(j);
                    } else {
                        v.push_back(j);
                        v.push_back(number / j);
                    }
                }
            }
            if(v.size() == 4) {
                for(int x : v) {
                    count = count + x;
                }
            }
        }
        return count;
    }
};