// class Solution
// {
// public:
//       vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m)
//       {
//             // your code here
//             vector<int> result;
//             priority_queue<int> ans;
//             int i = 0;
//             while (i < a.size())
//             {
//                   ans.push(a[i]);
//                   i++;
//             }
//             int j = 0;
//             while (j < b.size())
//             {
//                   ans.push(b[j]);
//                   j++;
//             }

//             while (!ans.empty())
//             {
//                   int val = ans.top();
//                   result.push_back(val);
//                   ans.pop();
//             }

//             return result;
//       }
// };