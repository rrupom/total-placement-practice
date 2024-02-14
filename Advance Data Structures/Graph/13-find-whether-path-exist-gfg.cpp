class Solution
{
public:
    bool visited[502][502];
    //Function to find whether a path exists from the source to destination.
    bool is_Possible(vector<vector<int>>& grid)
    {
        //code here
        for (int i = 0; i < 502; i++) {
            for (int j = 0; j < 502; j++) {
                visited[i][j] = false;
            }
        }
        bool flag;

        int row = grid.size();
        int col = grid[0].size();

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (grid[i][j] == 1) {
                    flag = dfs(grid, i, j, row, col);
                }
            }
        }

        return flag;
    }

    bool dfs(vector<vector<int>> &grid, int i, int j, int row, int col) {
        if (i >= 0 and i< row and j >= 0 and j < col and grid[i][j] == 2) {
            return true;
        }
        if (i < 0 or i > (row - 1) or j < 0 or j > (col - 1) or grid[i][j] == 0) {
            return false;
        }

        if (!visited[i][j]) {
            visited[i][j] = true;
            bool left = dfs(grid, i, j - 1, row, col);
            bool right = dfs(grid, i, j + 1, row, col);
            bool up = dfs(grid, i - 1, j, row, col);
            bool down = dfs(grid, i + 1, j, row, col);

            return left or right or up or down;
        }
    }
};