class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string codes[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> s;
        for(string word : words) {
            string codedWord = "";
            for(int i = 0; i < word.size(); i++) {
                int index = word[i] - 'a';
                codedWord = codedWord + codes[index];
            }
            s.insert(codedWord);
        }
        return s.size();
    }
};