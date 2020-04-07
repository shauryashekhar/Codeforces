class Solution {
public:
    int countElements(vector<int>& arr) {
        if(arr.size() == 0) {
            return 0;
        }
        multiset<int> s;
        for(int x : arr) {
            s.insert(x);
        }
        int result = 0;
        for(int i = 0; i < arr.size(); i++) {
            if(s.count(arr[i]+1)) {
                // cout<<"Found for "<<i<<endl;
                result++;
                // auto itr = s.find(arr[i] + 1);
                // if(itr != s.end()) {
                //     s.erase(itr);
                // }
            }
        }
        return result;
    }
};