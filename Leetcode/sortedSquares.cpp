class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        multiset<int> s;
        vector<int> result;
        if(A.size() == 0) {
            return result;
        }
        for(int x : A) {
            int temp = pow(x,2);
            s.insert(temp);
        }
        for(auto itr = s.begin(); itr != s.end(); itr++) {
            int digit = *itr;
            result.push_back(digit);
        }
        return result;
    }
};