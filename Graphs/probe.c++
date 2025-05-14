#include <iostream>
using namespace std;

int main()
{
      int t;
      cin >> t;
      while (t--)
      {
            int n, m, p, q;
            cin >> n >> m >> p >> q;

            // Check if the sum condition is feasible
            if (m % p == q * (n - p + 1) % p)
            {
                  cout << "YES" << endl;
            }
            else
            {
                  cout << "NO" << endl;
            }
      }
      return 0;
}
