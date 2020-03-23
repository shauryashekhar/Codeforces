class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> result;
        vector<int> odd;
        for(int x : A) {
            if(x % 2 == 0) {
                result.push_back(x);
            } else {
                odd.push_back(x);
            }
        }
        for(int y : odd) {
            result.push_back(y);
        }
        return result;
    }
};