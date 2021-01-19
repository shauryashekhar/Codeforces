class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string result;
        if(s.size() == 0) {
            return result;
        }
        map<int, char> m;
        int j = 0;
        for(int i : indices) {
            m[i] = s[j];
            j++;
        }
        for(auto itr = m.begin(); itr != m.end(); itr++) {
            // cout<<itr->first<<" "<<itr->second<<endl;
            result = result + itr->second;
        }
        return result;
    }
};