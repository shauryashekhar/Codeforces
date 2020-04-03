class Solution {
public:
    string convertToTitle(int n) {
        string result = "";
        if(n == 0) {
            return result;
        }
        while(n != 0){
            int temp = n % 26;
            if(temp == 0) {
                result.insert(result.begin(), 'Z');
                n = n - 1;
            } else {
                char c = (char)('A' + temp - 1);
                result.insert(result.begin(), c);
            }
            n = n / 26;
        }
        return result;
    }
};