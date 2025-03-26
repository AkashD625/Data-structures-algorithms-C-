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
            vector<int> arr;
            unordered_map<int, int> mp;
            for (int i = 0; i < n; i++)
            {
                  int val;
                  cin >> val;
                  arr.push_back(val);
                  mp[i]++;
            }
            if (mp.size() == 1)
                  cout << -1 << endl;
            break;

            vector<int> b;
            vector<int> c;

            for (int i = 0; i < n; i++)
            {
                  if (arr[i] % 2 == 0)
                  {
                        c.push_back(arr[i]);
                  }
                  else
                  {
                        b.push_back(arr[i]);
                  }
            }
            if (c.size() || b.size() == 0)
            {
                  cout << -1 << endl;
                  break;
            }
            else
            {
                  cout << b.size() << " " << c.size() << endl;
                  for (int i = 0; i < b.size(); i++)
                  {
                        cout << b[i] << " ";
                  }
                  cout << endl;
                  for (int i = 0; i < c.size(); i++)
                  {
                        cout << c[i] << " ";
                  }
                  cout << endl;
            }
      }

      return 0;
}
