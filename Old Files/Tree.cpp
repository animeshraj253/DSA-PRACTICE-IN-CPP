#include <iostream>

using namespace std;

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

node *buildTree(node *root)
{
    int data;
    cout << "Enter the data for Root node: ";
    cin >> data;

    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data to insert in left of " << data << endl;;
    root->left = buildTree(root->left);

    cout << "Enter data to insert in right of " << data << endl;;
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversal(node* root)
{
    
}
int main()
{
    node *root = NULL;

    // creating a Tree
    root = buildTree(root);
}