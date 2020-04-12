class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        set<string> result;
        vector<string> finalResult;
        if(words.size() == 0) {
            return finalResult;
        }
        for(int i = 0; i < words.size(); i++) {
            for(int j = 0; j < words.size(); j++) {
                if(i != j) {
                    if(words[i].find(words[j]) != string::npos) {
                        result.insert(words[j]);
                    }
                }
            }
        }
        for(auto itr = result.begin(); itr != result.end(); itr++) {
            finalResult.push_back(*itr);
        }
        return finalResult;
    }
};