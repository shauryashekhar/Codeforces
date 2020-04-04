class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        if(matrix.size() == 0) {
            return -1;
        }
        priority_queue<int, vector<int>, greater<int>> pq;
        int r = matrix.size();
        int c = matrix[0].size();
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                pq.push(matrix[i][j]);
            }
        }
        int i = 1;
        while(i < k) {
            pq.pop();
            i++;
        }
        return pq.top();
    }
};