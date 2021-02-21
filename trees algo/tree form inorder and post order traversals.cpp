
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
 
// Data structure to store a binary tree node
struct Node
{
    int key;
    Node *left, *right;
};
 
// Function to create a new binary tree node having a given key
Node* newNode(int key)
{
    Node* node = new Node;
    node->key = key;
    node->left = node->right = NULL;
 
    return node;
}
 
// Recursive function to perform inorder traversal on a given binary tree
void inorderTraversal(Node* root)
{
    if (root == NULL) {
        return;
    }
 
    inorderTraversal(root->left);
    cout << root->key << ' ';
    inorderTraversal(root->right);
}
 
// Recursive function to perform postorder traversal on a given binary tree
void postorderTraversal(Node* root)
{
    if (root == NULL) {
        return;
    }
 
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->key << ' ';
}
Node* construct(int start, int end,vector<int> const &postorder, int &pIndex,unordered_map<int,int> &map)
{
    if (start > end) {
        return NULL;
    }
    Node *root = newNode(postorder[pIndex--]);
    int index = map[root->key];
 
    // recursively construct the right subtree
    root->right = construct(index + 1, end, postorder, pIndex, map);
 
    // recursively construct the left subtree
    root->left = construct(start, index - 1, postorder, pIndex, map);

    return root;
}
 
// Construct a binary tree from inorder and postorder traversals.
Node* construct(vector<int> const &inorder, vector<int> const &postorder)
{
    int n = inorder.size();

    unordered_map<int,int> map;
    for (int i = 0; i < inorder.size(); i++) {
        map[inorder[i]] = i;
    }

    return construct(0, n - 1, postorder, pIndex, map);
}
 
int main()
{
 
    vector<int> inorder = { 4, 2, 1, 7, 5, 8, 3, 6 };
    vector<int> postorder = { 4, 2, 7, 8, 5, 6, 3, 1 };
 
    Node* root = construct(inorder, postorder);
    cout << "Inorder traversal is "; inorderTraversal(root);
    cout << "\nPostorder traversal is "; postorderTraversal(root);
 
    return 0;
}




