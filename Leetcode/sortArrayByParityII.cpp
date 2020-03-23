class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector<int> result;
        if(A.size() == 0) {
            return result;
        }
        vector<int> odd;
        vector<int> even;
        for(int x : A) {
            if(x % 2 == 0) {
                even.push_back(x);
            } else {
                odd.push_back(x);
            }
        }
        int poso = 0;
        int pose = 0;
        for(int j = 0; j < A.size(); j++) {
            if(j % 2 == 0) {
                result.push_back(even[pose]);
                pose++;
            } else {
                result.push_back(odd[poso]);
                poso++;
            }
        }
        return result;
    }
};