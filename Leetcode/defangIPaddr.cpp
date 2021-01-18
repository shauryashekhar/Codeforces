class Solution {
public:
    string defangIPaddr(string address) {
        string result;
        for(char c : address) {
            if(c == '.') {
                result = result + "[.]";
            } else {
                result = result + c;
            }
        }
        return result;
    }
};