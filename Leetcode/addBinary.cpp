class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";
        if(a.size() == 0 && b.size() == 0) {
            return result;
        }
        if(a.size() == 0) {
            return b;
        }
        if(b.size() == 0) {
            return a;
        }
        int la = a.size();
        int lb = b.size();
        int diff = 0;
        int check = 0;
        if(la > lb) {
            diff = la - lb;
            check = 1;
        } else if (lb > la){
            diff = lb - la;
            check = 2;
        }
        if(check == 1) {
            for(int i = 0; i < diff; i++) {
                b.insert(b.begin(), '0');
            }
        } else if(check == 2) {
            for(int i = 0; i < diff; i++) {
                a.insert(a.begin(), '0');
            }
        }
        int carry = 0;
        for(int k = b.size() - 1; k >= 0; k--) {
            int d1 = a[k] - '0';
            int d2 = b[k] - '0';
            // cout<<d1<<" "<<d2<<endl;
            int sum = 0;
            if((d1 == 0 && d2 == 1) || (d1 == 1 && d2 == 0)) {
                sum = 1;
            } else if(d1 == 1 && d2 == 1) {
                sum = 10;
            }
            if(carry) {
                if(sum == 0) {
                    sum = 1;
                } else if(sum == 1) {
                    sum = 10;
                } else if(sum == 10) {
                    sum = 11;
                }
                carry = 0;
            }
            if(sum != 0 || sum != 1) {
                if(sum == 10) {
                    sum = 0;
                    carry = 1;
                } else if(sum == 11) {
                    sum = 1;
                    carry = 1;
                }
            }
            if(sum == 1) {
                result.insert(result.begin(), '1');
            } else if(sum == 0) {
                result.insert(result.begin(), '0');
            }
        }
        if(carry) {
            result.insert(result.begin(), '1');
        }
        return result;
    }
};