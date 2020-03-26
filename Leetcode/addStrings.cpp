class Solution {
public:
    string addStrings(string num1, string num2) {
        string result;
        if(num1.size() == 0 && num2.size() == 0) {
            return result;
        }
        if(num1.size() == 0) {
            return num2;
        } 
        if(num2.size() == 0) {
            return num1;
        }
        int l1 = num1.size();
        int l2 = num2.size();
        int diff;
        int check = 0;
        string addTo;
        if(l1 > l2) {
            diff = l1 - l2;
            addTo = num2;
            check = 2;
        } else if(l2 > l1){
            diff = l2 - l1;
            addTo = num1;
            check = 1;
        }
        for(int i = 0; i < diff; i++) {
            addTo.insert(addTo.begin(), '0');
        }
        if(check == 1) {
            num1 = addTo;
        } else if(check == 2) {
            num2 = addTo;
        }
        int carry = 0;
        for(int k = num2.size() - 1; k >= 0; k--) {
            int d1 = num1[k] - '0';
            int d2 = num2[k] - '0';
            int sum = d1 + d2;
            if(carry) {
                sum = sum + carry;
                carry = 0;
            }
            // cout<<d1<<" "<<d2<<" "<<sum<<endl;
            if(sum >= 10) {
                sum = sum % 10;
                carry = 1;
            }
            char c = '0' + sum;
            result.insert(result.begin(), c);
        }
        if(carry) {
            result.insert(result.begin(), '1');
            carry = 0;
        }
        return result;
    }
};