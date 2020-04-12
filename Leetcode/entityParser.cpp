class Solution {
public:
    string entityParser(string text) {
        if(text.size() == 0) {
            return text;
        }
        while(text.find("&quot;") != string::npos) {
            int position = text.find("&quot;");
            text.erase(position, 6);
            text.insert(text.begin() + position, '"');
        }
        while(text.find("&apos;") != string::npos) {
            int position = text.find("&apos;");
            text.erase(position, 6);
            text.insert(text.begin() + position, '\'');
        }
        while(text.find("&amp;") != string::npos) {
            int position = text.find("&amp;");
            text.erase(position, 5);
            text.insert(text.begin() + position, '&');
        }
        while(text.find("&gt;") != string::npos) {
            int position = text.find("&gt;");
            text.erase(position, 4);
            text.insert(text.begin() + position, '>');
        }
        while(text.find("&lt;") != string::npos) {
            int position = text.find("&lt;");
            text.erase(position, 4);
            text.insert(text.begin() + position, '<');
        }
        while(text.find("&frasl;") != string::npos) {
            int position = text.find("&frasl;");
            text.erase(position, 7);
            text.insert(text.begin() + position, '/');
        }
        return text;
    }
};