class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> result;
        if(target.size() == 0) {
            return result;
        }
        if(n == 0) {
            return result;
        }
        int pos = 0;
        for(int i = 1; i <= n; i++) {
            if(pos < target.size()) {
                result.push_back("Push");
                if(i != target[pos]) {
                    result.push_back("Pop");
                } else {
                    pos++;
                }
            } else {
                break;
            }
        }
        return result;
    }
};