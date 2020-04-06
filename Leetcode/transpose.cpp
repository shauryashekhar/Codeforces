class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        vector<vector<int>> result;
        if(A.size() == 0) {
            return result;
        }
        int r = A.size();
        int c = A[0].size();
        int t[c][r];
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                t[j][i] = A[i][j];
            }
        }
        for(int k = 0; k < c; k++) {
            vector<int> row;
            for(int l = 0; l < r; l++) {
                row.push_back(t[k][l]);
            }
            result.push_back(row);
        }
        return result;
    }
};