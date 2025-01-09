#include <iostream>
#include <queue>
using namespace std;

// create the tree
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildtree(node *root)
{
     cout << "Enter the data: ";
    int data;
    cin >> data;
    
    if (data == -1) return NULL;
    root = new node(data);

    cout << "left element of " << data << endl;
    root->left = buildtree(root->left);
    cout << "right element of " << data << endl;
    root->right = buildtree(root->right);

    return root;
}

// traversal - Level order , preorder , inorder , postorder
void levelordertraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    // use while loop and stor left and right elements in the queue

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        // checking for NULL in queue
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }

        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void preordertraversal(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preordertraversal(root->left);
    preordertraversal(root->right);
}

void postoder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    postoder(root->left);
    postoder(root->right);
    cout << root->data << " ";
}

void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{

    node *root = NULL;
    root = buildtree(root);
    cout << "Level order traversal" << endl;
    levelordertraversal(root);
    inorder(root);
   // levelordertraversal(root);
    preordertraversal(root);
    //levelordertraversal(root);
    postoder(root);
    //levelordertraversal(root);
}