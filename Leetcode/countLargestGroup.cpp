class Solution {
public:
    int countLargestGroup(int n) {
        if(n == 0) {
            return 0;
        }
        map<int, vector<int>> m;
        for(int i = 1; i <= n; i++) {
            int number = i;
            int sum = 0;
            while(number != 0) {
                int digit = number % 10;
                sum = sum + digit;
                number = number / 10;
            }
            if(m.count(sum)) {
                vector<int> tv = m[sum];
                tv.push_back(i);
                m[sum] = tv;
            } else {
                vector<int> tv;
                tv.push_back(i);
                m[sum] = tv;
            }
        }
        int largestSize = INT_MIN;
        for(auto itr = m.begin(); itr != m.end(); itr++) {
            vector<int> v = itr->second;
            int size = v.size();
            if(size > largestSize) {
                largestSize = size;
            }
        }
        int result = 0;
        for(auto itr = m.begin(); itr != m.end(); itr++) {
            vector<int> v = itr->second;
            if(v.size() == largestSize) {
                result++;
            }
        }
        return result;
    }
};