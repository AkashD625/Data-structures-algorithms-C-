#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int f(int n, vector<int>& height, vector<int>& dp, int k) {
      if (n == 0) return 0;
      if (dp[n] != -1) return dp[n];
      int minSteps = INT_MAX;
      for (int j = 1; j <= k; ++j) {
            if (n - j >= 0) {
                  int jump = f(n - j, height, dp, k) + abs(height[n] - height[n - j]);
                  minSteps = min(minSteps, jump);
            }
      }
      return dp[n] = minSteps;
}

int main() {
      int n, k;
      cin >> n >> k;
      vector<int> height(n);
      for (int i = 0; i < n; ++i) {
            cin >> height[i];
      }
      vector<int> dp(n, -1);
      cout << f(n - 1, height, dp, k) << endl;
      return 0;
}