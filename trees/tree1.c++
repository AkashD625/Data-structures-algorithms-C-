

// ## 1. What is a Tree? 🌳

// * **Non‑linear hierarchical data structure** composed of **nodes** connected by **edges**.
// * Unlike arrays or lists (linear), trees branch out—ideal for representing hierarchical relationships.
//   ([YouTube][1])

// ---

// ## 2. Fundamental Terminology

// * **Root**: The top or starting node of a tree.
// * **Parent / Child**: A node directly connected above is the parent; one below is a child.
// * **Leaf Node** (External node): A node with **no children**.
// * **Internal Node**: A node with **at least one child**.
// * **Degree**: Number of children a node has (e.g., binary tree: degree ≤ 2).
// * **Height of Node**: Longest path (in edges) from that node down to a leaf.
// * **Depth of Node**: Distance (in edges) from the root down to that node.
//   ([Wikipedia][2])

// ---

// ## 3. Overall Properties

// * A **tree with N nodes** has exactly **N − 1 edges**.
// * Connections are **acyclic** and **hierarchical**, forming a directed structure from root to leaves.
// * Nodes are typically shown top-down in diagrams to reflect hierarchy.
//   ([YouTube][3], [Wikipedia][4])

// ---

// ## 4. Classification of Trees

// * **General Tree**: Any node can have an arbitrary number of children.
// * **Binary Tree**: Each node has at most **two children**—commonly called left and right.
// * **Ordered vs. Unordered**: In ordered trees (like binary), each child has a specific position (left/right). In general, siblings may not have order.

// ---

// ## 5. Types of Binary Trees

// 1. **Full Binary Tree**: Every node has **0 or 2 children** — no nodes with only one child.
// 2. **Perfect Binary Tree**: All internal nodes have 2 children, and **all leaves are at the same depth**.
// 3. **Complete Binary Tree**: All levels are fully filled except possibly the last, which is filled **left to right**.
// 4. **Degenerate (or Pathological) Tree**: Each internal node has only **one child**, resembling a linked list.
// 5. **Balanced Binary Tree**: Heights of left and right subtrees differ by no more than one at any node.
//    ([Wikipedia][2])

// ---

// ## 6. Use Cases & Advantages

// * Trees model structures like:

//   * Organization charts
//   * File systems
//   * XML/HTML documents
//   * Game decision trees
// * They support **fast data lookup, insertion, deletion**, and hierarchical traversal.
//   ([YouTube][5])

// ---

// ## 7. Why Tree Structures Are Powerful

// * Represent **hierarchical relationships** naturally.
// * Offer **efficient operations**—especially when balanced.
// * Enable various traversal strategies:

//   * **Pre-order**: Visit node → left subtree → right subtree
//   * **In-order**: Left subtree → node → right subtree
//   * **Post-order**: Left subtree → right subtree → node
//   * **Level-order** (BFS): Visit level by level from root down
//     ([Wikipedia][4])

// ---

// ## 8. Summary Table

// | Concept                   | Definition / Description                                |
// | ------------------------- | ------------------------------------------------------- |
// | **Tree**                  | Non-linear structure; root, nodes, edges                |
// | **Root / Parent / Child** | Node relationships defining structure hierarchy         |
// | **Leaf / Internal Node**  | Leaf: no children; Internal: at least one child         |
// | **Degree**                | Number of children a node has                           |
// | **Height / Depth**        | Height: max distance to leaf; Depth: distance from root |
// | **Binary Tree Types**     | Full, Perfect, Complete, Degenerate, Balanced           |
// | **Traversals**            | Pre, In, Post, Level order                              |


