#define N 220
class Solution {
    int currentPos;
    int found;
    int row[4] = {-1,1,0,0};
    int col[4] = {0,0,-1,1};
public:
    
    void dfs(vector<vector<char>>& board, string word, int currentPos, int visited[][N], int i, int j, int r, int c) {
        // cout<<i<<" "<<j<<endl;
        visited[i][j] = 1;
        currentPos++;
        if(currentPos == word.size()) {
            found = 1;
            return;
        }
        for(int k = 0; k < 4; k++) {
            if(i+row[k] >= 0 && i + row[k] < r && j+col[k] >= 0 && j + col[k] < c && board[i+row[k]][j+col[k]] == word[currentPos] && visited[i+row[k]][j+col[k]] == 0) {
                dfs(board, word, currentPos, visited, i + row[k], j + col[k], r, c);
                if(found == 1) {
                    return;
                }
            }
        }
        if(found == 0) {
            visited[i][j] = 0;
            currentPos--;
        }
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        if(board.size() == 0) {
            return false;
        }
        if(word.size() == 0) {
            return true;
        }
        int r = board.size();
        int c = board[0].size();
        int visited[N][N];
        memset(visited, 0, sizeof(visited));
        currentPos = 0;
        found = 0;
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                if(board[i][j] == word[currentPos] && visited[i][j] == 0) {
                    dfs(board, word, currentPos, visited, i, j, r, c);
                    if(found == 1) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};