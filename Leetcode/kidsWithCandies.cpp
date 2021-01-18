class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int largest = INT_MIN;
        for(int i : candies) {
            if (i > largest) {
                largest = i;
            }
        }
        for(int j : candies) {
            if (j + extraCandies >= largest){
                result.push_back(true);
            } else {
                result.push_back(false);
            }
        }
        return result;
    }
};