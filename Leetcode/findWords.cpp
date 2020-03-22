class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> result;
        if(words.size() == 0) {
            return result;
        }
        map<char, int> m;
        m.insert({'q',0});
        m.insert({'w',0});
        m.insert({'e',0});
        m.insert({'r',0});
        m.insert({'t',0});
        m.insert({'y',0});
        m.insert({'u',0});
        m.insert({'i',0});
        m.insert({'o',0});
        m.insert({'p',0});
        m.insert({'a',1});
        m.insert({'s',1});
        m.insert({'d',1});
        m.insert({'f',1});
        m.insert({'g',1});
        m.insert({'h',1});
        m.insert({'j',1});
        m.insert({'k',1});
        m.insert({'l',1});
        m.insert({'z',2});
        m.insert({'x',2});
        m.insert({'c',2});
        m.insert({'v',2});
        m.insert({'b',2});
        m.insert({'n',2});
        m.insert({'m',2});
        for(int i = 0; i < words.size(); i++) {
            string word = words[i];
            set<int> s;
            for(int j = 0; j < word.size(); j++) {
                char letter = tolower(word[j]); 
                s.insert(m[letter]);
            }
            if(s.size() == 1) {
                result.push_back(word);
            }
        }
        return result;
    }
};