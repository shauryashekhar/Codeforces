class Solution {
public:
    int hammingDistance(int x, int y) {
        vector<int> v1;
        while(x != 0) {
            int remainder = x % 2;
            v1.insert(v1.begin(), remainder);
            x = x / 2;
        }
        vector<int> v2;
        while(y != 0) {
            int remainder = y % 2;
            v2.insert(v2.begin(), remainder);
            y = y / 2;
        }
        vector<int> v3 = v1;
        vector<int> v4 = v2;
        int diff = 0;
        if(v1.size() > v2.size()) {
            diff = v1.size() - v2.size();
            v3 = v2;
            v4 = v1;
        } else if(v2.size() > v1.size()){
            diff = v2.size() - v1.size();
            v3 = v1;
            v4 = v2;
        }
        for(int i = 0; i < diff; i++) {
            v3.insert(v3.begin(), 0);
        }
        int count = 0;
        for(int i = 0; i < v3.size(); i++) {
            if(v3[i] != v4[i]) {
                count++;
            }
        }
        return count;
    }
};