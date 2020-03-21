class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size = nums.size();
        int level = size/2;
        map<int, int> m;
        for(int i = 0; i < size; i++) {
            int num = nums[i];
            if(m.count(num)) {
                m[num] = m[num] + 1;
            } else {
                m[num] = 1;
            }
            if(m[num] > level) {
                return num;
            }
        }
        // for(auto itr = m.begin(); itr != m.end(); itr++) {
        //     int value = itr->first;
        //     int key = itr->second;
        //     if(key > level) {
        //         return value;
        //     }
        // }
        return NULL;
    }
};