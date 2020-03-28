/*
// Employee info
class Employee {
public:
    // It's the unique ID of each node.
    // unique id of this employee
    int id;
    // the importance value of this employee
    int importance;
    // the id of direct subordinates
    vector<int> subordinates;
};
*/
class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        if(employees.size() == 0) {
            return 0;
        }
        queue<Employee*> q;
        map<int, Employee*> m;
        for(Employee* e : employees) {
            int idno = e->id;
            m[idno] = e;
        }
        if(m.count(id)) {
            q.push(m[id]);
        } else {
            return 0;
        }
        set<int> seen;
        seen.insert(id);
        int result = 0;
        while(!q.empty()) {
            Employee* e = q.front();
            q.pop();
            result = result + e->importance;
            vector<int> tv = e->subordinates;
            for(int x : tv) {
                if(seen.count(x) == 0) {
                    q.push(m[x]);
                    seen.insert(x);
                }
            }
        }
        return result;
    }
};