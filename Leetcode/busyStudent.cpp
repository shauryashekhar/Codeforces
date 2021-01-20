class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int result = 0;
        if (startTime.size() == 0) {
            return result;
        }
        for(int i = 0; i < startTime.size(); i++) {
            if(startTime[i] <= queryTime && endTime[i] >= queryTime) {
                result++;
            }
        }
        return result;
    }
};