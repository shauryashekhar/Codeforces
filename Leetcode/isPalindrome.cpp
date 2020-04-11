class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size() == 0) {
            return true;
        }
        int l = 0;
        int r = s.size() - 1;
        while(l < r) {
            if(isdigit(s[l]) == false && isalpha(s[l]) == false) {
                l++;
                continue;
            }
            if(isdigit(s[r]) == false && isalpha(s[r]) == false) {
                r--;
                continue;
            }
            if(((isdigit(s[l])) && (isdigit(s[r])) && (s[l] != s[r])) || (tolower(s[l]) != tolower(s[r]))) {
                return false;
            } else {
                l++;
                r--;
            }
        }
        return true;
    }
};