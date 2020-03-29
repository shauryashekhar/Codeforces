class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        vector<vector<int>> result;
        if(A.size() == 0) {
            return result;
        }
        for(vector<int> row : A) {
            vector<int> temp;
            for(auto itr = row.rbegin(); itr != row.rend(); itr++) {
                if(*itr == 0) {
                    temp.push_back(1);
                } else {
                    temp.push_back(0);
                }
            }
            result.push_back(temp);
        }
        return result;
    }
};