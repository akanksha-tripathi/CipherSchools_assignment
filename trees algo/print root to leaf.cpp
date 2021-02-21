#include <bits/stdc++.h>
using namespace std;
struct Node{
   int data;
   struct Node *left, *right;
};

Node* newNode(int data){
   Node* node = new Node;
   node->data = data;
   node->left = NULL;
    node->right = NULL;
   return node;
}

void calcPath(Node* curr, map<Node*, Node*> first){
   stack<Node*> s;
   while (curr){
      s.push(curr);
      curr = first[curr];
   }
   while (!s.empty()){
      curr = s.top();
      s.pop();
      cout << curr->data << " ";
   }
   cout << endl;
}

void leaf(Node* root){
   if (root == NULL)
      return;
   stack<Node*> st;
   st.push(root);
   map<Node*, Node*> prnt;
   prnt[root] = NULL;
   while (!st.empty()){
      Node* curr = st.top();
      st.pop();
      if (!(curr->left) && !(curr->right))
         calcPath(curr, prnt);
      if (curr->right){
         prnt[curr->right] = curr;
         st.push(curr->right);
      }
      if (curr->left){
         prnt[curr->left] = curr;
         st.push(curr->left);
      }
   }
}
int main(){
   Node* root = newNode(67);
   root->left = newNode(34);
   root->right = newNode(89);
   root->left->left = newNode(23);
   root->left->right = newNode(95);
   root->right->left = newNode(12);
   leaf(root);
   return 0;
}
