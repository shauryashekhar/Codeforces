class Solution {
public:
    string interpret(string command) {
        string result = "";
        if(command.size() == 0) {
            return result;
        }
        for(int i = 0; i < command.size();) {
            if (command[i] == 'G') {
                result = result + 'G';
                i++;
            } else if (command[i] == '(' && command[i+1] == ')') {
                result = result + 'o';
                i = i + 2;
            } else {
                result = result + "al";
                i = i + 4;
            }
        }
        return result;
    }
};