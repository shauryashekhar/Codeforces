class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> result;
        if(A.size() == 0) {
            return result;
        }
        for(int x : A) {
            result.push_back(x*x);
        }
        sort(result.begin(), result.end());
        return result;
    }
};