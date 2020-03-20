class Solution {
public:
    string toLowerCase(string str) {
        int size = str.size();
        string result;
        for(int i = 0; i < size; i++) {
            if(isupper(str[i])) {
                result.push_back(tolower(str[i]));
            } else {
                result.push_back(str[i]);
            }
        }
        return result;
    }
};