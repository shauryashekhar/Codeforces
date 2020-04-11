class Solution {
public:
    bool backspaceCompare(string S, string T) {
        if(S.size() == 0 && T.size() == 0) {
            return true;
        }
        string ts;
        for(int i = 0; i < S.size(); i++) {
            if(isalpha(S[i])) {
                ts.push_back(S[i]);
            } else if(S[i] == '#') {
                if(ts.size() > 0) {
                    ts.pop_back();
                }
            }
        }
        string tt;
        for(int j = 0; j < T.size(); j++) {
            if(isalpha(T[j])) {
                tt.push_back(T[j]);
            } else if(T[j] == '#') {
                if(tt.size() > 0) {
                    tt.pop_back();
                }
            }
        }
        if(tt.size() != ts.size()) {
            return false;
        }
        if(tt.size() == ts.size()) {
            for(int k = 0; k < tt.size(); k++) {
                if(tt[k] != ts[k]) {
                    return false;
                }
            }
        }
        return true;
    }
};