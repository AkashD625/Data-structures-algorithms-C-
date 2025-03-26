#include <bits/stdc++.h>
using namespace std;

int main()
{
      int t;
      cin >> t;
      while (t--)
      {
            int n;
            cin >> n;
            vector<int> arr(n);
            bool hasOdd = false, hasEven = false;

            // Read array elements and check if we have odd and even numbers
            for (int i = 0; i < n; i++)
            {
                  cin >> arr[i];
                  if (arr[i] % 2 == 0)
                        hasEven = true;
                  else
                        hasOdd = true;
            }

            // If there are both odd and even numbers, output YES, otherwise NO
            if (hasOdd && hasEven)
                  cout << "YES" << endl;
            else
                  cout << "NO" << endl;
      }
      return 0;
}
