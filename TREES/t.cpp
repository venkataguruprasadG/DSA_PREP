#include <iostream>
using namespace std;

class TreeNode
{
public:
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

void preorder(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    preorder(root->left);

    preorder(root->right);
}

int main()
{
    TreeNode *root = new TreeNode(10);
    root->left = new TreeNode(20);
    root->right = new TreeNode(30);

    preorder(root);
}