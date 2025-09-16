#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

int main() {
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    // Optional: print to confirm
    cout << "Root: " << root->data << endl;
    cout << "Left Child: " << root->left->data << endl;
    cout << "Right Child: " << root->right->data << endl;

    return 0;
}
