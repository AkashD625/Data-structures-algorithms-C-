// DP - The one who cannot remember the past .
// there are two types 
// 1) Tabulation method 2) Memorizationn 
// // Tabulation method is bottom up approach 
// // Memorization is top down approach
// lets see the memorization approach first in that tc and sc after that will optimize the sc (jackpot)

// Simple example of MEMORIZATION method in C++
// while conmputing the fibonacci series if some where f(n)->(subproblem) is 2 then while entire computation of fibonacci series we will not compute f(2) again and again we will store it in a map or array and use it when required

// Simple example of MEMORIZATION method in C++ for fibonacci series using array
#include <bits/stdc++.h>      
#include <iostream>
using namespace std;
int fib(int n, vector<int> &dp) {
    if (n <= 1) return n; // Base case
    if (dp[n] != -1) return dp[n]; // Check if already computed

    // Recursive case with memorization
    dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
    return dp[n];
}

int main() {
    int n = 10; // Example input
    vector<int> dp(n + 1, -1); // Initialize memoization array
    cout << "Fibonacci of " << n << " is " << fib(n, dp) << endl;
    return 0;
}


//Converting to the tabulation method
// Tabulation method is a bottom-up approach where we build the solution iteratively
// better then memorization in terms of space complexity
//simple example of tabulation method in C++ for fibonacci series using array
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int n = 10; // Example input
    vector<int> dp(n + 1, 0); // Initialize tabulation array
    dp[0] = 0; // Base case
    dp[1] = 1; // Base case

    // Fill the tabulation array
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    cout << "Fibonacci of " << n << " is " << dp[n] << endl;
    return 0;
}
