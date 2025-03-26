#include <iostream>
#include <climits>
using namespace std;

int main()
{
      int n;
      cin >> n;
      int arr[n];
      // Initialize to maximum possible value

      for (int i = 0; i < n; i++)
      {
            cin >> arr[i];
      }
      int maxop = 1e9;
      for (int i = 0; i < n; i++)
      {
            maxop = min(maxop, abs(arr[i] - 0));
      }
      cout << maxop << endl;
      return 0;
}
