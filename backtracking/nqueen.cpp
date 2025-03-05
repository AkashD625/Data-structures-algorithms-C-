
// The addition of the queen start colum wise

#include <iostream>
#include <vector>

using namespace std;

bool issafe(int row, int col, vector<vector<int>> &bord, int n)
{
      int x = row, y = col;

      // Check for the same row (left side)
      while (y >= 0)
      {
            if (bord[x][y] == 1)
            {
                  return false;
            }
            y--;
      }

      // Check upper-left diagonal
      x = row;
      y = col;
      while (x >= 0 && y >= 0)
      {
            if (bord[x][y] == 1)
            {
                  return false;
            }
            x--;
            y--;
      }

      // Check lower-left diagonal
      x = row;
      y = col;
      while (x < n && y >= 0)
      {
            if (bord[x][y] == 1)
            {
                  return false;
            }
            x++;
            y--;
      }

      return true;
}

void addsolution(vector<vector<int>> &bord, vector<vector<int>> &ans, int n)
{
      vector<int> temp;
      for (int i = 0; i < n; i++)
      {
            for (int j = 0; j < n; j++)
            {
                  temp.push_back(bord[i][j]);
            }
      }
      ans.push_back(temp);
}

void solve(int col, vector<vector<int>> &bord, vector<vector<int>> &ans, int n)
{
      // Base case: if all columns are filled, add solution
      if (col == n)
      {
            addsolution(bord, ans, n);
            return;
      }

      for (int row = 0; row < n; row++)
      {
            if (issafe(row, col, bord, n))
            {
                  bord[row][col] = 1; // Place queen
                  solve(col + 1, bord, ans, n);
                  bord[row][col] = 0; // Backtrack
            }
      }
}

vector<vector<int>> solveNQueens(int n)
{
      vector<vector<int>> bord(n, vector<int>(n, 0));
      vector<vector<int>> ans;
      solve(0, bord, ans, n);
      return ans;
}

int main()
{
      int n;
      cout << "Enter the number of queens: ";
      cin >> n;

      vector<vector<int>> solutions = solveNQueens(n);

      cout << "Number of solutions: " << solutions.size() / (n * n) << endl;

      for (int k = 0; k < solutions.size(); k += (n * n))
      {
            cout << "Solution " << (k / (n * n)) + 1 << ":\n";
            for (int i = k; i < k + (n * n); i += n)
            {
                  for (int j = 0; j < n; j++)
                  {
                        cout << (solutions[i + j] ? "Q " : ". ");
                  }
                  cout << endl;
            }
            cout << endl;
      }

      return 0;
}
