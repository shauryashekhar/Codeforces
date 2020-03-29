class UndergroundSystem {
    map<int, pair<string, int>> m;
    map<pair<string, string>, pair<int, int>> timeMap;
public:
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        pair<string, int> tempPair = make_pair(stationName, t);
        m[id] = tempPair;
    }
    
    void checkOut(int id, string stationName, int t) {
        pair<string, int> oldPair = m[id];
        m.erase(id);
        string srcStation = oldPair.first;
        int startTime = oldPair.second;
        pair<string, string> stationPair = make_pair(srcStation, stationName);
        int timeTaken = t - startTime;
        if(timeMap.count(stationPair)) {
            pair<int, int> tempPair = timeMap[stationPair];
            tempPair.first = tempPair.first + timeTaken;
            tempPair.second = tempPair.second + 1;
            timeMap[stationPair] = tempPair;
        } else {
            pair<int, int> tempPair = make_pair(timeTaken , 1);
            timeMap[stationPair] = tempPair;
        }
    }
    
    double getAverageTime(string startStation, string endStation) {
        double result;
        pair<string, string> stationPair = make_pair(startStation, endStation);
        pair<int, int> resultPair = timeMap[stationPair];
        result = (double)resultPair.first / (double)resultPair.second;
        // cout<<result<<endl;
        return result;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */