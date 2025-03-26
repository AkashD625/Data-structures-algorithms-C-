#include <bits/stdc++.h>
using namespace std;

struct State
{
      bool valid;
      int prev_i, prev_c1, prev_c2;
      int bit_val;
};

int main()
{
      ios::sync_with_stdio(false);
      cin.tie(nullptr);

      int t;
      cin >> t;
      while (t--)
      {
            long long x, y;
            cin >> x >> y;
            if (x == y)
            {
                  cout << -1 << "\n";
                  continue;
            }

            int L = 62;
            vector<vector<vector<State>>> dp(L + 1, vector<vector<State>>(2, vector<State>(2, {false, -1, -1, -1})));

            dp[0][0][0].valid = true;

            for (int i = 0; i < L; i++)
            {
                  int bx = (x >> i) & 1;
                  int by = (y >> i) & 1;
                  for (int c1 = 0; c1 < 2; c1++)
                  {
                        for (int c2 = 0; c2 < 2; c2++)
                        {
                              if (!dp[i][c1][c2].valid)
                                    continue;
                              for (int bit = 0; bit < 2; bit++)
                              {
                                    int s1 = bx + bit + c1;
                                    int s2 = by + bit + c2;
                                    int A_bit = s1 & 1;
                                    int B_bit = s2 & 1;
                                    if (A_bit == 1 && B_bit == 1)
                                          continue;
                                    int nc1 = s1 >> 1;
                                    int nc2 = s2 >> 1;
                                    if (!dp[i + 1][nc1][nc2].valid)
                                    {
                                          dp[i + 1][nc1][nc2].valid = true;
                                          dp[i + 1][nc1][nc2].prev_i = i;
                                          dp[i + 1][nc1][nc2].prev_c1 = c1;
                                          dp[i + 1][nc1][nc2].prev_c2 = c2;
                                          dp[i + 1][nc1][nc2].bit_val = bit;
                                    }
                              }
                        }
                  }
            }

            bool finalStateFound = false;
            int final_c1 = -1, final_c2 = -1;
            for (int c1 = 0; c1 < 2 && !finalStateFound; c1++)
            {
                  for (int c2 = 0; c2 < 2; c2++)
                  {
                        if (dp[L][c1][c2].valid)
                        {
                              if (c1 == 1 && c2 == 1)
                                    continue;
                              finalStateFound = true;
                              final_c1 = c1;
                              final_c2 = c2;
                              break;
                        }
                  }
            }

            if (!finalStateFound)
            {
                  cout << -1 << "\n";
                  continue;
            }

            long long k = 0;
            int i = L, cur_c1 = final_c1, cur_c2 = final_c2;
            while (i > 0)
            {
                  State st = dp[i][cur_c1][cur_c2];
                  int prev_i = st.prev_i;
                  int prev_c1 = st.prev_c1;
                  int prev_c2 = st.prev_c2;
                  int bit = st.bit_val;
                  if (bit == 1)
                        k |= (1LL << (i - 1));
                  i = prev_i;
                  cur_c1 = prev_c1;
                  cur_c2 = prev_c2;
            }

            if (k > 1e18)
            {
                  cout << -1 << "\n";
            }
            else
            {
                  cout << k << "\n";
            }
      }
      return 0;
}
