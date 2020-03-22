class Solution {
public:
    string reverseOnlyLetters(string S) {
        int l = 0;
        int r = S.size() - 1;
        if(r == -1) {
            return S;
        }
        while(l < r) {
            if(!isalpha(S[l])) {
                l++;
            }
            if(!isalpha(S[r])) {
                r--;
            }
            if(isalpha(S[l]) && isalpha(S[r])) {
                char temp = S[l];
                S[l] = S[r];
                S[r] = temp;
                l++;
                r--;
            }
        }
        return S;
    }
};