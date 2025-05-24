/* Q: How to find elements in arr that can be matched with greater or equal elements in arr2 after sorting both arrays?
      A: By sorting both arrays and using two pointers to collect such elements from arr. */

      Time complexity for the sort function is O(n)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> check(const vector<int> &arr, const vector<int> &arr2)
{
      vector<int> sortedArr = arr;
      vector<int> sortedArr2 = arr2;
      vector<int> result;

      sort(sortedArr.begin(), sortedArr.end());
      sort(sortedArr2.begin(), sortedArr2.end());

      int i = 0, j = 0;
      int m = sortedArr.size();
      int n = sortedArr2.size();

      while (i < m && j < n)
      {
            if (sortedArr2[j] >= sortedArr[i])
            {
                  result.push_back(sortedArr[i]);
                  i++;
            }
            else
            {
                  j++;
            }
      }

      return result;
}

int main()
{
      vector<int> arr = {2, 5, 6, 8, 4};
      vector<int> arr2 = {3, 6, 5, 2, 1};

      vector<int> re = check(arr, arr2);
      for (auto i : re)
      {
            cout << i << " ";
      }

      return 0;
}
