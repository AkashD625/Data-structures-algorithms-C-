#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

void solve()
{
      int n, k;
      cin >> n >> k;
      vector<int> a(n);

      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }

      vector<int> first(k + 1, -1), last(k + 1, -1);

      // Store first and last occurrence of each number from 1 to k
      for (int i = 0; i < n; i++)
      {
            if (first[a[i]] == -1)
                  first[a[i]] = i;
            last[a[i]] = i;
      }

      int min_moves = INT_MAX;

      for (int i = 1; i <= k; i++)
      {
            if (first[i] != -1 && last[i] != -1)
            {
                  min_moves = min(min_moves, last[i] - first[i] + 1);
            }
      }

      cout << min_moves - k << "\n";
}

int main()
{
      ios::sync_with_stdio(false);
      cin.tie(nullptr);

      int t;
      cin >> t;
      while (t--)
      {
            solve();
      }
      return 0;
}