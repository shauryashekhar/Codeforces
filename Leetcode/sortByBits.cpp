class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        map<int, vector<int>> m;
        vector<int> result;
        if(arr.size() == 0) {
            return result;
        }
        for(int x : arr) {
            int number = x;
            int c = 0;
            while(number != 0) {
                int remainder = number % 2;
                if(remainder == 1) {
                    c++;
                }
                number = number / 2;
            }
            // cout<<"For x "<<x<<" number of 1 is "<<c<<endl;
            if(m.count(c)) {
                vector<int> tempSet = m[c];
                tempSet.push_back(x);
                m[c] = tempSet;
            } else {
                vector<int> tempSet;
                tempSet.push_back(x);
                m[c] = tempSet;
            }
        }
        for(auto itr = m.begin(); itr != m.end(); itr++) {
            vector<int> tempSet = itr->second;
            sort(tempSet.begin(), tempSet.end());
            // cout<<"KEY "<<itr->first<<endl;
            for(auto it = tempSet.begin(); it != tempSet.end(); it++) {
                // cout<<*it<<" ";
                result.push_back(*it);
            }
            // cout<<endl;
        }
        return result;
    }
};