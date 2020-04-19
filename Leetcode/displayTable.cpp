class Solution {
public:
    vector<vector<string>> displayTable(vector<vector<string>>& orders) {
        map<string, int> foodMap;
        map<int, vector<int>> tableMap;
        int count = 0;
        vector<vector<string>> result;
        if(orders.size() == 0) {
            return result;
        }
        for(vector<string> order : orders) {
            string table = order[1];
            int tableNum = stoi(table);
            string foodItem = order[2];
            int itemNumber;
            if(foodMap.count(foodItem)) {
                itemNumber = foodMap[foodItem];
            } else {
                foodMap[foodItem] = count;
                itemNumber = count;
                count++;
            }
            if(tableMap.count(tableNum)) {
                vector<int> tv = tableMap[tableNum];
                tv.push_back(itemNumber);
                tableMap[tableNum] = tv;
            } else {
                vector<int> tv;
                tv.push_back(itemNumber);
                tableMap[tableNum] = tv;
            }
        }
        vector<string> row;
        row.push_back("Table");
        for(auto itr = foodMap.begin(); itr != foodMap.end(); itr++) {
            string ts = itr->first;
            row.push_back(ts);
        }
        result.push_back(row);
        row.clear();
        for(auto itr = tableMap.begin(); itr != tableMap.end(); itr++) {
            int tableNum = itr->first;
            vector<int> tv = itr->second;
            string tableNumberString = to_string(tableNum);
            row.push_back(tableNumberString);
            map<int, int> tm;
            for(int x : tv) {
                if(tm.count(x)) {
                    tm[x] = tm[x] + 1;
                } else {
                    tm[x] = 1;
                }
            }
            for(auto itrfood = foodMap.begin(); itrfood != foodMap.end(); itrfood++) {
                string foodItem = itrfood->first;
                int index = itrfood->second;
                string value;
                if(tm.count(index)) {
                    int toBeInserted = tm[index];
                    value = to_string(toBeInserted);
                } else {
                    value = "0"; 
                }
                row.push_back(value);
            }
            result.push_back(row);
            row.clear();
        }
        return result;
    }
};