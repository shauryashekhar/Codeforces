class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        map<char, int> mainMap;
        int result = 0;
        if(chars.size() == 0 | words.size() == 0) {
            return 0;
        }
        for(char c : chars) {
            if(mainMap.count(c)) {
                mainMap[c] = mainMap[c] + 1;
            } else {
                mainMap[c] = 1;
            }
        }
        for(string word : words) {
            map<char, int> m;
            for(char l : word) {
                if(m.count(l)) {
                    m[l] = m[l] + 1;
                } else {
                    m[l] = 1;
                }
            }
            int correct = 1;
            for(auto itr = m.begin(); itr != m.end(); itr++) {
                char letter = itr->first;
                int count = itr->second;
                if(mainMap.count(letter)) {
                    if(count > mainMap[letter]) {
                        correct = 0;
                        break;
                    }
                } else {
                    correct = 0;
                    break;
                }
            }
            if(correct) {
                result = result + word.size();
            }
        }
        return result;
    }
};