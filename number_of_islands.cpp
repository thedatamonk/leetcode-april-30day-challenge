class Solution {
public:
    
    void dfs(int i, int j, vector<vector<char>>& grid, vector<vector<bool>>& visited){
        
        visited[i][j] = true;
        if (i-1 >= 0 && grid[i-1][j] == '1' && !visited[i-1][j])
            dfs(i-1, j, grid, visited);
        
        if (i+1 < grid.size() && grid[i+1][j] == '1' && !visited[i+1][j])
            dfs(i+1, j, grid, visited);
        
        if (j-1 >=0 && grid[i][j-1] == '1' && !visited[i][j-1])
            dfs(i, j-1, grid, visited);
        
        if (j+1 < grid[0].size() && grid[i][j+1] == '1' && !visited[i][j+1])
            dfs(i, j+1, grid, visited);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        
        if (grid.size()==0) return 0;
        int row = grid.size(), col = grid[0].size();
        vector<vector<bool>> visited(row);
        
        for (int i=0; i<row; i++){
            visited[i] = vector<bool>(col);
            for (int j=0; j<col; j++){
                visited[i][j] = false;
            }
        }
        
        int num = 0;
        for (int i=0; i<row; i++){
            for (int j=0; j<col; j++){
                if (grid[i][j]=='1' && !visited[i][j]){
                    // islands are comprised of only 1s
                    num++;
                    dfs(i, j, grid, visited);
                }
            }
        }
        
        return num;
    }
};