class Solution {
public:
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int count = 0;
        int row = grid.size();
        int col = grid[0].size();

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (grid[i][j] == '1') {
                    ++count;
                    dfs(grid, i, j, row, col);
                }
            }
        }

        return count;
    }

    void dfs(vector<vector<char>> &grid, int i, int j, int row, int col) {
        if (i < 0 or i > (row - 1) or j < 0 or j > (col - 1) or grid[i][j] != '1') {
            return;
        }

        if (grid[i][j] == '1') {
            grid[i][j] = '0';
            dfs(grid, i, j - 1, row, col);
            dfs(grid, i, j + 1, row, col);
            dfs(grid, i - 1, j, row, col);
            dfs(grid, i + 1, j, row, col);

            dfs(grid, i - 1, j - 1, row, col);
            dfs(grid, i - 1, j + 1, row, col);
            dfs(grid, i + 1, j - 1, row, col);
            dfs(grid, i + 1, j + 1, row, col);
        }
    }
};