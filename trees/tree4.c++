// Traversal technics explanation in simple terms with examples
// BFS and DFS are two fundamental tree traversal techniques:

// 1. **BFS (Breadth-First Search)**:
//    - Explores all the nodes at the present depth level before moving on to the nodes at the next depth level.
//    - Uses a queue data structure.
//    - Example: Finding the shortest path in an unweighted tree.

// 2. **DFS (Depth-First Search)**:
//    - Explores as far as possible along each branch before backtracking.
//    - Uses a stack data structure (or recursion).
//    - Example: Solving puzzles with only one solution path (like mazes).

// Both techniques have their own use cases and can be implemented using various programming languages, including C++.

// 1] pre order - 
//    - Visit the root node first, then recursively visit the left subtree, followed by the right subtree.
//    - Example: Used in expression trees to get prefix notation.
// 2] in order -
//    - Recursively visit the left subtree, then the root node, and finally the right subtree.
//    - Example: Used in binary search trees to retrieve elements in sorted order.

// 3] post order -
//    - Recursively visit the left subtree, then the right subtree, and finally the root node.
//    - Example: Used in expression trees to get postfix notation.
