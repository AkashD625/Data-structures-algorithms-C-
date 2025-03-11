#include <iostream>
using namespace std;

int main()
{
      int t;
      cin >> t;

      while (t--)
      {
            int n, k;
            cin >> n >> k;
            int arr[n];

            for (int i = 0; i < n; i++)
            {
                  cin >> arr[i];
            }

            bool chapresent = false;

            for (int j = 0; j < n; j++)
            {
                  if (arr[j] == k)
                  {
                        chapresent = true;
                        cout << "YES" << endl;
                        break;
                  }
            }

            if (!chapresent)
            {
                  cout << "NO" << endl;
            }
      }

      return 0;
}
