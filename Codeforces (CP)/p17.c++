#include <bits/stdc++.h>
using namespace std;
int main()
{
      int t;
      cin >> t;
      while (t--)
      {
            int sum = 0;
            int n, k, x;
            cin >> n >> k >> x;

            if (k < 1 && n != 0)
            {
                  cout << "NO" << endl;
            }
            else{

                  cout << "YES" <<endl;
                  int i = 1;
                  while(sum < n){
                        sum = sum + i;
                        
                  }

            }
      }
}