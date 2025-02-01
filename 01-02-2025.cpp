class Solution {
  public:
    bool isWordExist(vector<vector<char>>& mat, string& word) {
        // Code here
         int rows = mat.size();
        int cols = mat[0].size();

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                // Start DFS if the first letter matches
                if (mat[i][j] == word[0] && dfs(mat, word, i, j, 0)) {
                    return true;
                }
            }
        }
        return false;
    }
    
private:
    bool dfs(vector<vector<char>>& mat, string& word, int x, int y, int index) {
        // Base condition: all characters matched
        if (index == word.length()) return true;

        // Boundary conditions and character mismatch check
        if (x < 0 || x >= mat.size() || y < 0 || y >= mat[0].size() || mat[x][y] != word[index]) {
            return false;
        }

        // Mark the current cell as visited by storing and altering the value
        char temp = mat[x][y];
        mat[x][y] = '#'; // Use a special marker to indicate the cell is visited

        // Explore all four possible directions (up, down, left, right)
        bool found = dfs(mat, word, x + 1, y, index + 1) ||
                     dfs(mat, word, x - 1, y, index + 1) ||
                     dfs(mat, word, x, y + 1, index + 1) ||
                     dfs(mat, word, x, y - 1, index + 1);

        // Restore the cell value
        mat[x][y] = temp;

        return found;
    }
};
