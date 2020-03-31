class Solution {
public:
    bool hasAlternatingBits(int n) {
        if(n == 0) {
            return true;
        }
        string binary = "";
        while(n != 0) {
            int digit = n % 2;
            if(digit == 1) {
                binary.insert(binary.begin(), '1');
            } else {
                binary.insert(binary.begin(), '0');
            }
            n = n / 2;
        }
        // cout<<binary<<endl;
        if(binary.find("11") != string::npos) {
            return false;
        }
        if(binary.find("00") != string::npos) {
            return false;
        }
        return true;
    }
};