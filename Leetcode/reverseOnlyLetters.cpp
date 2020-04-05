class Solution {
public:
    string reverseOnlyLetters(string S) {
        if(S.size() == 0) {
            return S;
        }
        int l = 0;
        int r = S.size() - 1;
        while(l < r) {
            if(isalpha(S[l]) && isalpha(S[r])) {
                char c = S[l];
                S[l] = S[r];
                S[r] = c;
                l++;
                r--;
            }
            if(!isalpha(S[l])) {
                l++;
            }
            if(!isalpha(S[r])) {
                r--;
            }
        }
        return S;
    }
};