class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.size();
        if(len == 0) {
            return 0;
        }
        int j;
        int result = 0;
        for(j = len - 1; j >= 0; j--) {
            if(s[j] == ' ') {
                break;
            } else {
                result++;
            }
        }
        if(j == 0) {
            return 0;
        } else {
            return result;
        }
    }
};