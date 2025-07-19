//frog jump problem from codestudio .
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int f(int n , vector<int>&height , vector<int>&h+dp){
if(n == 0) return 0;
if(dp[n] != -1) return dp[n];
int left = f(n-1) + abs(height[n] + height[n-1]); // abs converts the negative value to positive value for abs(-4) = 4.

int right =INT_MAX;
if(n > 1) right = f(n-2) + abd(height[n] + height[n-2]);

return dp[n] = min(left , right);


}
int main(int n , vector<int> &height){
vector<int> dp(n+1 , -1);
return f(n , height , dp);
}