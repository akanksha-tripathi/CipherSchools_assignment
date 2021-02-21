
#include <bits/stdc++.h> 
using namespace std; 
struct Node { 
    int data; 
    struct Node *left, *right; 
    bool visited; 
}; 
  
void postorder(struct Node* head) 
{ 
    struct Node* temp = head; 
    while (temp && temp->visited == false) { 
        if (temp->left && temp->left->visited == false) 
            temp = temp->left; 
        else if (temp->right && temp->right->visited == false) 
            temp = temp->right; 
        else { 
            printf("%d ", temp->data); 
            temp->visited = true; 
            temp = head; 
        } 
    } 
} 
  
struct Node* newNode(int data) 
{ 
    struct Node* node = new Node; 
    node->data = data; 
    node->left = NULL; 
    node->right = NULL; 
    node->visited = false; 
    return (node); 
} 
  
int main() 
{ 
    struct Node* root = newNode(1); 
    root->left = newNode(2); 
    root->right = newNode(3); 
    root->left->left = newNode(4); 
    root->left->right = newNode(6); 
    root->left->right->left = newNode(5); 
    root->left->right->right = newNode(7); 
    root->right->right = newNode(8); 
    root->right->right->left = newNode(9); 
    postorder(root); 
    return 0; 
} 
