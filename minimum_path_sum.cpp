class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        // tnis is a DP problem
        // start with 0,0
        int row = grid.size(), col = grid[0].size();
        for (int i=0; i<row; i++){
            for (int j=0; j<col; j++){
                if (i ==0 && j==0) continue;
                
                else if (i==0) grid[i][j] += grid[i][j-1];
                else if (j == 0) grid[i][j] += grid[i-1][j];
                else grid[i][j] += min(grid[i][j-1], grid[i-1][j]);
            }
        }
        
        return grid[row-1][col-1];
    }
};