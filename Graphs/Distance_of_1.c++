// Q - Distance of nearest cell having 1
class Solution
{
public:
      vector<vector<int>> nearest(vector<vector<int>> &grid)
      {
            int n = grid.size();
            int m = grid[0].size();

            queue<pair<pair<int, int>, int>> q;
            vector<vector<int>> visited(n, vector<int>(m, 0));
            vector<vector<int>> dist(n, vector<int>(m, 0));

            for (int i = 0; i < n; i++)
            {
                  for (int j = 0; j < m; j++)
                  {
                        if (grid[i][j] == 1)
                        {
                              visited[i][j] = 1;
                              q.push({{i, j}, 0});
                        }
                  }
            }

            int delrow[] = {-1, 0, +1, 0};
            int delcol[] = {0, +1, 0, -1};

            while (!q.empty())
            {
                  int row = q.front().first.first;
                  int col = q.front().first.second;
                  int step = q.front().second;
                  q.pop();

                  dist[row][col] = step;

                  for (int i = 0; i < 4; i++)
                  {
                        int nrow = row + delrow[i];
                        int ncol = col + delcol[i];

                        if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && !visited[nrow][ncol])
                        {
                              visited[nrow][ncol] = 1;
                              q.push({{nrow, ncol}, step + 1});
                        }
                  }
            }

            return dist;
      }
};
