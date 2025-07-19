#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct Node
{
      int data;
      Node *left;
      Node *right;

      Node(int val)
      {
            data = val;
            left = nullptr;
            right = nullptr;
      }
};

void preoreder(Node *root)
{
      if (root == nullptr)
            return;

      cout << root->data << " ";
      preoreder(root->left);
      preoreder(root->right);
}