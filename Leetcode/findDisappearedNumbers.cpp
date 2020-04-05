class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> s;
        vector<int> result;
        int n = nums.size();
        for(int i = 1; i <= n; i++) {
            s.insert(i);
        }
        for(int j : nums) {
            s.erase(j);
        }
        for(auto itr = s.begin(); itr != s.end(); itr++) {
            result.push_back(*itr);
        }
        return result;
    }
};