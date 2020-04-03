class Solution {
public:
    int titleToNumber(string s) {
        if(s.size() == 0) {
            return 0;
        }
        int result = 0;
        int j = 0;
        for(int i = s.size()-1; i >= 0; i--) {
            int temp = pow(26, j);
            int pos = s[i] - 'A' + 1;
            int prelim = temp*pos;
            result = result + prelim;
            j++;
        }
        return result;
    }
};