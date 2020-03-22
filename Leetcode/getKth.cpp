class Solution {
public:
    int getKth(int lo, int hi, int k) {
        map<int, vector<int>> m;
        for(int num = lo; num <= hi; num++) {
            int number = num;
            int power = 0;
            while(number != 1) {
                if(number % 2 == 0) {
                    number = number / 2;
                } else {
                    number = (number * 3) + 1;
                }
                power++;
            }
            if(m.count(power)) {
                vector<int> tempVector = m[power];
                tempVector.push_back(num);
                m[power] = tempVector;
            } else {
                vector<int> tempVector;
                tempVector.push_back(num);
                m[power] = tempVector;
            }
        }
        vector<int> result;
        for(auto itr = m.begin(); itr != m.end(); itr++) {
            vector<int> v;
            v = itr->second;
            sort(v.begin(), v.end());
            for(int i : v) {
                result.push_back(i);
            }
        }
        int answer = result[k-1];
        return answer;
    }
};