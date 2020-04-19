class Solution {
public:
    string reformat(string s) {
        string result = "";
        if(s.size() == 0) {
            return result;
        }
        vector<char> cv;
        vector<int> iv;
        for(char c : s) {
            if(isalpha(c)) {
                cv.push_back(c);
            } else {
                int temp = c - '0';
                iv.push_back(temp);
            }
        }
        int ivsize = iv.size();
        int cvsize = cv.size();
        if(abs(ivsize - cvsize) >= 2) {
            return result;
        } else if(abs(ivsize - cvsize) == 1) {
            if(ivsize > cvsize) {
                int i = 1;
                while(iv.size() > 0 && cv.size() > 0) {
                    if(i == 0) {
                        char c = cv[cv.size() - 1];
                        cv.pop_back();
                        result = result + c;
                        i = 1;
                    } else {
                        int t = iv[iv.size() - 1];
                        iv.pop_back();
                        char c = '0' + t;
                        result = result + c;
                        i = 0;
                    }
                }
                if(iv.size() == 1) {
                    int t = iv[iv.size() - 1];
                    iv.pop_back();
                    char c = t + '0';
                    result = result + c;
                }
                if(cv.size() == 1) {
                    char c = cv[cv.size() - 1];
                    cv.pop_back();
                    result = result + c;
                }
            } else {
                int i = 0;
                while(iv.size() > 0 && cv.size() > 0) {
                    if(i == 0) {
                        char c = cv[cv.size() - 1];
                        cv.pop_back();
                        result = result + c;
                        i = 1;
                    } else {
                        int t = iv[iv.size() - 1];
                        iv.pop_back();
                        char c = '0' + t;
                        result = result + c;
                        i = 0;
                    }
                }
                if(iv.size() == 1) {
                    int t = iv[iv.size() - 1];
                    iv.pop_back();
                    char c = t + '0';
                    result = result + c;
                }
                if(cv.size() == 1) {
                    char c = cv[cv.size() - 1];
                    cv.pop_back();
                    result = result + c;
                }
            }
        } else if(abs(ivsize - cvsize) == 0) {
            int i = 0;
            while(iv.size() > 0 && cv.size() > 0) {
                if(i == 0) {
                    char c = cv[cv.size() - 1];
                    cv.pop_back();
                    result = result + c;
                    i = 1;
                } else {
                    int t = iv[iv.size() - 1];
                    iv.pop_back();
                    char c = '0' + t;
                    result = result + c;
                    i = 0;
                }
            }
            if(iv.size() == 1) {
                int t = iv[iv.size() - 1];
                iv.pop_back();
                char c = t + '0';
                result = result + c;
            }
            if(cv.size() == 1) {
                char c = cv[cv.size() - 1];
                cv.pop_back();
                result = result + c;
            }
        }
        return result;
    }
};