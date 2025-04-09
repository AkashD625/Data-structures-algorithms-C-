// GFG problem - Flood fill Algorithm
class Solution
{
private:
      void dfs(int row, int col, int iniColor, vector<vector<int>> &ans,
               vector<vector<int>> &image, int newColor, int delrow[], int delcol[])
      {
            ans[row][col] = newColor;
            int n = image.size();
            int m = image[0].size();
            for (int i = 0; i < 4; i++)
            {
                  int nrow = row + delrow[i];
                  int ncol = col + delcol[i];
                  if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
                      ans[nrow][ncol] == iniColor && ans[nrow][ncol] != newColor)
                  {
                        dfs(nrow, ncol, iniColor, ans, image, newColor, delrow, delcol);
                  }
            }
      }

public:
      vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor)
      {
            vector<vector<int>> ans = image;
            int iniColor = image[sr][sc];

            // Avoid unnecessary work if color is already the same
            if (iniColor == newColor)
                  return ans;

            int delrow[] = {-1, 0, 1, 0}; // up, right, down, left
            int delcol[] = {0, 1, 0, -1};
            dfs(sr, sc, iniColor, ans, image, newColor, delrow, delcol);
            return ans;
      }
};
