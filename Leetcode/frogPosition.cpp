#define N 102

class Solution {
    
    int grid[102][102];
    int visited[102];
    int row[4] = {-1,1,0,0};
    int col[4] = {0,0,-1,1};
    vector<int> path;
    int found;
    
public:
    
    void show(vector<int> v) {
        for(int x : v) {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    
    void dfs(int grid[][N], int i, int j, int n, int visited[], int currentTurn, int maxTurn, int targetValue) {
        // cout<<"Next "<<j<<endl;
        path.push_back(j);
        visited[j] = 1;
        if(j == targetValue && currentTurn == maxTurn) {
            // cout<<"Returning"<<endl;
            found = 1;
            return;
        } else if(j == targetValue && currentTurn < maxTurn) {
            int lastPossible = 1;
            for(int k = j + 1; k <= n; k++) {
                if(grid[j][k] == 1 && visited[k] == 1) {
                    continue;
                } if(grid[j][k] == 0) {
                    continue;
                } else {
                    lastPossible = 0;
                    break;
                }
            }
            if(lastPossible) {
                found = 1;
                return;
            }
               
        }else if (currentTurn > maxTurn) {
            if(found == 0) {
                // visited[j] = 0;
                currentTurn--;
                path.pop_back();
            }
            // cout<<"B"<<endl;
            return;
        } else {
            for(int k = j + 1; k <= n; k++) {
                if(grid[j][k] == 1 && visited[k] == 0) {
                    dfs(grid, j, k, n, visited, currentTurn + 1, maxTurn, targetValue);
                    if(found == 1) {
                        break;
                    }
                }
            }
            if(found == 0) {
                // visited[j] = 0;
                currentTurn--;
                path.pop_back();
            }
            // cout<<"B"<<endl;
            return;
        }
    }
    
    double frogPosition(int n, vector<vector<int>>& edges, int t, int target) {
        double result = 0.0;
        if(target == 1 && edges.size() == 0) {
            return 1.0;
        } else if(target != 1 && edges.size() == 0) {
            return 0.0;
        } else if(target == 1 && t == 0) {
            return 1.0;
        } else if(target != 1 && t == 0) {
            return 0.0;
        }
        memset(grid, 0, sizeof(grid));
        memset(visited, 0, sizeof(visited));
        map<int, vector<int>> m;
        for(int i = 0; i < edges.size(); i++) {
            vector<int> list = edges[i];
            int x, y;
            if(list[0] < list[1]) {
                x = list[0];
                y = list[1];
            } else {
                y = list[0];
                x = list[1];
            }
            if(m.count(x)) {
                vector<int> tv = m[x];
                tv.push_back(y);
                m[x] = tv;
            } else {
                vector<int> tv;
                tv.push_back(y);
                m[x] = tv;
            }
            grid[x][y] = 1;
            grid[y][x] = 1;
        }
        found = 0;
        visited[1] = 1;
        for(int j = 2; j <= n; j++) {
            path.push_back(1);
            if(grid[1][j] == 1 && visited[j] == 0 && found == 0) {
                dfs(grid, 1, j, n, visited, 1, t, target);
                if(found == 1) {
                    break;
                } else {
                    path.clear();
                }
            }
            if(found == 1) {
                break;
            } else {
                path.clear();
            }
        }
        
        // show(path);
        
        if(found == 1) {
            result = 1.0;
            for(int p = 0; p < path.size() - 1; p++) {
                int x = path[p];
                int y = path[p+1];
                vector<int> tempVector = m[x];
                // show(tempVector);
                int size = tempVector.size();
                // cout<<size<<endl;
                double multiplyFactor = 1/(double)size;
                result = result * multiplyFactor;
            }
            return result;
        } else {
            return result;
        }
        
    }
};