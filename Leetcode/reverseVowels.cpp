class Solution {
public:
    string reverseVowels(string s) {
        int l = 0;
        int r = s.size() - 1;
        while(l < r) {
            if((s[l] == 'a' || s[l] == 'e' || s[l] == 'i' || s[l] == 'o' || s[l] == 'u') && (s[r] == 'a' || s[r] == 'e' || s[r] == 'i' || s[r] == 'o' || s[r] == 'u')) {
                // cout<<"Swapped at "<<l<<" and "<<r<<endl;
                char temp = s[l];
                s[l] = s[r];
                s[r] = temp;
                l++;
                r--;
            } else if(s[r] != 'a' && s[r] != 'e' && s[r] != 'i' && s[r] != 'o' && s[r] != 'u') {
                // cout<<"Moved in at "<<r<<endl;
                r--;
            } else if(s[l] != 'a' && s[l] != 'e' && s[l] != 'i' && s[l] != 'o' && s[l] != 'u') {
                // cout<<"Moved out at "<<l<<endl;
                l++;
            }
        }
        return s;
    }
};