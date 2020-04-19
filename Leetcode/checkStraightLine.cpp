class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if(coordinates.size() == 0) {
            return false;
        }
        float prev = 0.0;
        for(int i = 1; i < coordinates.size(); i++) {
            // cout<<i<<endl;
            vector<int> p2 = coordinates[i];
            vector<int> p1 = coordinates[i-1];
            int p2x = p2[0];
            int p2y = p2[1];
            int p1x = p1[0];
            int p1y = p1[1];
            float current;
            if(p2x - p1x == 0) {
                current = std::numeric_limits<int>::max();
            } else {
                current = (float)(p2y - p1y) / (float)(p2x - p1x);
            }
            // cout<<prev<<" "<<current<<endl;
            if(i == 1) {
                prev = current;
            } else {
                if(current != prev) {
                    return false;
                }
            }
        }
        return true;
    }
};