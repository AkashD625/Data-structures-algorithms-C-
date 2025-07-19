How can we understand that the given problem is dp problem or not?
// A problem is typically considered a dynamic programming (DP) problem if it exhibits the following characteristics:
// 1. **Optimal Substructure**: The problem can be broken down into smaller subproblems, and the optimal solution to the overall problem can be constructed from the optimal solutions of its subproblems.
// 2. **Overlapping Subproblems**: The problem can be solved by solving the same subproblems multiple times. This means that the same subproblem can be solved in different parts of the problem, leading to redundant calculations.
// 3. **Recursion**: The problem can often be expressed recursively, where the solution to the problem depends on solutions to smaller instances of the same problem.

//*********************some easy shortcuts to identify a DP problem:***************************************************

// 1. **Subproblem Structure**: If you can break the problem into smaller subproblems that can be solved independently, it may be a DP problem.
// 2. **Optimal Substructure**: If the solution to the problem can be constructed from the solutions of its subproblems, it is likely a DP problem.
// 3. **Overlapping Subproblems**: If the same subproblems are solved multiple times, it indicates that memoization or tabulation can be applied to optimize the solution.
// 4. **Recursion**: If the problem can be expressed recursively, it is often a sign that it can be solved using DP techniques.
// 5. **State Representation**: If you can define a state that represents the solution to a subproblem, it is a good indication that the problem can be approached using DP.
// 6. **Constraints**: If the problem has constraints that allow for a polynomial-time solution, it may be a DP problem. DP is often used to solve problems with exponential time complexity by breaking them down into manageable subproblems.
// 7. **Examples**: Familiarity with common DP problems (like Fibonacci, Knapsack, longest common subsequence, etc.) can help you recognize similar patterns in new problems.
// 8. **Iterative vs Recursive**: If a recursive solution leads to exponential time complexity due to repeated calculations, consider whether a DP approach (either memoization or tabulation) can optimize it.
// 9. **State Transition**: If you can define how to transition from one state to another using previously computed results, it is a strong indicator of a DP problem.
// 10. **Problem Type**: Many classic problems in computer science, such as optimization problems, combinatorial problems, and sequence alignment problems, are often solved using DP techniques.


