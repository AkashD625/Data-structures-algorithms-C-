#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

void solve()
{
      int t;
      cin >> t; // Number of test cases

      while (t--)
      {
            int n, x;
            cin >> n >> x; // Read number of gas stations and destination point

            vector<int> stations(n);

            // Read gas station positions
            for (int i = 0; i < n; i++)
            {
                  cin >> stations[i];
            }

            // Sort the gas stations
            sort(stations.begin(), stations.end());

            int ans = INT_MIN;

            // Maximum gap between consecutive gas stations
            for (int i = 1; i < n; i++)
            {
                  ans = max(ans, stations[i] - stations[i - 1]);
            }

            // Consider the first station distance from 0 and last station to destination x
            ans = max(ans, stations[0] - 0);           // Distance from the start (0) to the first station
            ans = max(ans, 2 * (x - stations[n - 1])); // Twice the distance from the last station to x

            cout << ans << endl;
      }
}

int main()
{
      solve();
      return 0;
}
