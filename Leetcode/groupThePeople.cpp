class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> result;
        map<int, vector<int>> m;
        if(groupSizes.size() == 0) {
            return result;
        }
        for(int i = 0; i < groupSizes.size(); i++) {
            int n = groupSizes[i];
            if(n == 1) {
                vector<int> tempVector;
                tempVector.push_back(i);
                result.push_back(tempVector);
            } else {
                if(m.count(n)) {
                    vector<int> tempVector = m[n];
                    tempVector.push_back(i);
                    if(tempVector.size() == n) {
                        result.push_back(tempVector);
                        m.erase(n);
                    } else {
                        m[n] = tempVector;
                    }
                } else {
                    vector<int> tempVector;
                    tempVector.push_back(i);
                    m[n] = tempVector;
                }
            }
        }
        return result;
    }
};