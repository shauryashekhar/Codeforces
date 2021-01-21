class RecentCounter {
    vector<int> v;
public:
    RecentCounter() {
        v.clear();
    }
    
    int ping(int t) {
        v.push_back(t);
        int count = 0;
        for(int x : v) {
            if(x >= t - 3000 && x <= t) {
                count++;
            }
        }
        return count;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */

// SOLUTION 2

class RecentCounter {
    vector<int> pings;
public:
    RecentCounter() {
        
    }
    
    int ping(int t) {
        pings.push_back(t);
        while(pings.size()) {
            if(pings[0] < t - 3000) {
                pings.erase(pings.begin());
            } else {
                break;
            }
        }
        return pings.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */