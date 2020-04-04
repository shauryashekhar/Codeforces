class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
        vector<int> result;
        if(A.size() == 0 || queries.size() == 0) {
            return result;
        }
        int sum = 0;
        for(int x : A) {
            if(x % 2 == 0) {
                sum = sum + x;
            }
        }
        for(vector<int> op : queries) {
            int value = op[0];
            int pos = op[1];
            int oldValue = A[pos];
            if(oldValue % 2 == 0) {
                sum = sum - oldValue;
            }
            A[pos] = A[pos] + value;
            if(A[pos] % 2 == 0) {
                sum = sum + A[pos];
            }
            result.push_back(sum);
        }
        return result;
    }
};