#include <iostream>
using namespace std;

int main()
{
      int t;
      cin >> t;

      while (t--)
      {
            int n, m;
            cin >> n >> m;

            string x, s;
            cin >> x >> s;

            // If 's' is already present in 'x', print 0 and continue
            if (x.find(s) != string::npos)
            {
                  cout << "0" << endl;
                  continue;
            }

            string temp = x;
            int count = 0;
            int maxop = 5;
            bool found = false;

            for (int i = 0; i <= 5; i++)
            {
                  if (x.find(s) != string::npos)
                  {
                        cout << i << endl;
                        found = true;
                        break;
                  }
                  else
                  {
                        x.append(x);
                  }
            }

            if (!found)
            {
                  cout << -1 << endl;
            }
      }

      return 0;
}
