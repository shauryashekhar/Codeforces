class Solution {
public:
    int findComplement(int num) {
        vector<int> binary;
        while(num != 0) {
            int toInsert = num % 2;
            binary.insert(binary.begin(), toInsert);
            num = num / 2;
        }
        for(int j = 0; j < binary.size(); j++) {
            if(binary[j] == 1) {
                binary[j] = 0;
            } else {
                binary[j] = 1;
            }
        }
        int result = 0;
        
        for(int j = 0; j < binary.size(); j++) {
            int power = pow(2,j);
            int baseValue = binary[binary.size() - 1 - j] * power;
            // cout<<"At j " <<j<<" Power is "<<power<<" and baseValue "<<binary[binary.size() - 1 - j]<<endl;
            result = result + baseValue;
        }
        
        return result;
    }
};