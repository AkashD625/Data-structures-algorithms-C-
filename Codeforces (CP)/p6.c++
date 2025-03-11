#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
      int t;
      cin >> t;
      while (t--)
      {
            long long n;
            cin >> n;
            vector<long long> arr(n);

            for (int i = 0; i < n; i++)
            {
                  cin >> arr[i];
            }

            // Store the frequencies
            map<long long, long long> freq;
            for (int i = 0; i < n; i++)
            {
                  freq[arr[i]]++;
            }

            // If map size is greater than 2, print "No"
            if (freq.size() > 2)
            {
                  cout << "No" << endl;
                  continue;
            }

            if (freq.size() == 1)
            {
                  cout << "Yes" << endl;
                  continue;
            }

            auto it = freq.begin();
            long long fr1 = it->second;
            it++;
            long long fr2 = it->second;

            if (fr1 == fr2 || (n % 2 == 1 && abs(fr1 - fr2) == 1))
            {
                  cout << "Yes" << endl;
            }
            else
            {
                  cout << "No" << endl;
            }
      }
      return 0;
}
