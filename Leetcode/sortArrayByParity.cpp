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

// SOLUTION 2

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> result;
        if(A.size() == 0) {
            return result;
        }
        int l = 0;
        int r = A.size() - 1;
        while(l < r) {
            if(A[l] % 2 == 0) {
                l++;
            } else if (A[r] % 2 == 1) {
                r--;
            } else if (A[l] % 2 == 1 && A[r] % 2 == 0) {
                int temp = A[l];
                A[l] = A[r];
                A[r] = temp;
            }
        }
        return A;
    }
};