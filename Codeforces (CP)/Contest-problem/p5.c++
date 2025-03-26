#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
      int n;
      cin >> n;

      vector<ll> a(n), b(n);
      ll sum_a = 0, sum_b = 0;

      for (ll &x : a)
      {
            cin >> x;
            sum_a += x;
      }
      for (ll &x : b)
      {
            cin >> x;
            sum_b += x;
      }

      // If sum_a < sum_b, it's impossible to find such k
      if (sum_a < sum_b)
      {
            cout << "-1\n";
            return;
      }

      ll diff = sum_a - sum_b;
      if (diff == 0)
      {
            // Special case when sum(a) == sum(b), a and b must be identical after sorting
            vector<ll> sorted_a = a, sorted_b = b;
            sort(sorted_a.begin(), sorted_a.end());
            sort(sorted_b.begin(), sorted_b.end());

            if (sorted_a == sorted_b)
            {
                  cout << (*max_element(a.begin(), a.end())) + 1 << "\n"; // Any k > max(a) works
            }
            else
            {
                  cout << "-1\n";
            }
            return;
      }

      vector<ll> sorted_b = b;
      sort(sorted_b.begin(), sorted_b.end());

      ll max_a = *max_element(a.begin(), a.end());
      ll max_b = *max_element(b.begin(), b.end());

      ll answer = -1;

      // Finding divisors of diff
      for (ll k = 1; k * k <= diff; ++k)
      {
            if (diff % k == 0)
            {
                  // Checking both divisors: k and diff/k
                  for (ll candidate_k : {k, diff / k})
                  {
                        if (candidate_k > max_b && candidate_k <= max_a)
                        {
                              vector<ll> mod_a;
                              for (ll x : a)
                              {
                                    mod_a.push_back(x % candidate_k);
                              }
                              sort(mod_a.begin(), mod_a.end());

                              if (mod_a == sorted_b)
                              {
                                    answer = candidate_k;
                                    break;
                              }
                        }
                  }
            }
      }

      cout << answer << '\n';
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