class Solution
{

      void dfs(int row, int col, vector<vector<char>> &mat, vector<vector<int>> &visi, int n, int m)
      {
            visi[row][col] = 1;

            int delrow[] = {0, 1, 0, -1};
            int delcol[] = {1, 0, -1, 0};

            for (int i = 0; i < 4; i++)
            {
                  int nr = row + delrow[i];
                  int nc = col + delcol[i];

                  if (nr >= 0 && nr < n && nc >= 0 && nc < m &&
                      !visi[nr][nc] && mat[nr][nc] == 'O')
                  {

                        dfs(nr, nc, mat, visi, n, m);
                  }
            }
      }

public:
      vector<vector<char>> fill(vector<vector<char>> &mat)
      {
            int n = mat.size();    // number of rows
            int m = mat[0].size(); // number of columns

            vector<vector<int>> visi(n, vector<int>(m, 0));

            // Traverse first and last column
            for (int i = 0; i < n; i++)
            {
                  if (mat[i][0] == 'O' && !visi[i][0])
                  {
                        dfs(i, 0, mat, visi, n, m);
                  }
                  if (mat[i][m - 1] == 'O' && !visi[i][m - 1])
                  {
                        dfs(i, m - 1, mat, visi, n, m);
                  }
            }

            // Traverse first and last row
            for (int j = 0; j < m; j++)
            {
                  if (mat[0][j] == 'O' && !visi[0][j])
                  {
                        dfs(0, j, mat, visi, n, m);
                  }
                  if (mat[n - 1][j] == 'O' && !visi[n - 1][j])
                  {
                        dfs(n - 1, j, mat, visi, n, m);
                  }
            }

            // Flip all unvisited 'O' to 'X'
            for (int i = 0; i < n; i++)
            {
                  for (int j = 0; j < m; j++)
                  {
                        if (mat[i][j] == 'O' && !visi[i][j])
                        {
                              mat[i][j] = 'X';
                        }
                  }
            }

            return mat;
      }
};
