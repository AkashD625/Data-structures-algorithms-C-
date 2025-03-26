#include <iostream>
#include <string>
using namespace std;

// Check if s is universal: s < reverse(s) lexicographically.
bool isUniversal(const string &s)
{
      int n = s.size();
      for (int i = 0; i < n / 2; i++)
      {
            if (s[i] != s[n - 1 - i])
                  return s[i] < s[n - 1 - i];
      }
      return false; // if s is a palindrome, it's not universal.
}

int main()
{
      ios::sync_with_stdio(false);
      cin.tie(nullptr);

      int t;
      cin >> t;
      while (t--)
      {
            int n, k;
            cin >> n >> k;
            string s;
            cin >> s;

            // Case 1: If n==1, cannot be universal.
            if (n == 1)
            {
                  cout << "NO\n";
                  continue;
            }

            // Check if all characters are same.
            bool allSame = true;
            for (int i = 1; i < n; i++)
            {
                  if (s[i] != s[0])
                  {
                        allSame = false;
                        break;
                  }
            }
            if (allSame)
            {
                  cout << "NO\n";
                  continue;
            }

            // If already universal, no swap is needed.
            if (isUniversal(s))
            {
                  cout << "YES\n";
                  continue;
            }

            // Otherwise, if s is not universal (either non-palindrome with the first mismatch unfavorable or a palindrome)
            // one swap always suffices. So answer YES if we can perform at least 1 swap.
            cout << (k >= 1 ? "YES" : "NO") << "\n";
      }
      return 0;
}