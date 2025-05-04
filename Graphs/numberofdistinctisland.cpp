class Solution
{
private:
      void dfs(int row, int col, vector<vector<int>> &grid,
               vector<vector<int>> &visi, vector<pair<int, int>> &vec,
               int row0, int col0)
      {

            visi[row][col] = 1;
            vec.push_back({row - row0, col - col0});

            int delrow[] = {1, 0, -1, 0};
            int delcol[] = {0, -1, 0, 1};
            int n = grid.size();
            int m = grid[0].size();

            for (int i = 0; i < 4; i++)
            {
                  int nr = row + delrow[i];
                  int nc = col + delcol[i];

                  if (nr >= 0 && nr < n && nc >= 0 && nc < m &&
                      !visi[nr][nc] && grid[nr][nc] == 1)
                  {
                        dfs(nr, nc, grid, visi, vec, row0, col0);
                  }
            }
      }

public:
      int countDistinctIslands(vector<vector<int>> &grid)
      {
            int n = grid.size();
            int m = grid[0].size();

            set<vector<pair<int, int>>> st;
            vector<vector<int>> visi(n, vector<int>(m, 0));

            for (int i = 0; i < n; i++)
            {
                  for (int j = 0; j < m; j++)
                  {
                        if (!visi[i][j] && grid[i][j] == 1)
                        {
                              vector<pair<int, int>> vec;
                              dfs(i, j, grid, visi, vec, i, j);
                              st.insert(vec); // Only unique island shapes will be stored
                        }
                  }
            }

            return st.size();
      }
};