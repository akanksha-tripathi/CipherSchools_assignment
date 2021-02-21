#include<bits/stdc++.h>
using namespace std;
//Structure of a node of the tree  
  
struct TreeNode
{  
    int val;  
    TreeNode *left;  
    TreeNode *right;  
};  

TreeNode* makeTreeNode(int data)
{                                               
    TreeNode *newTreeNode = new TreeNode();      
    newTreeNode->val = data;                     
    return newTreeNode;  
}


int check_mirror(TreeNode *root1,TreeNode *root2)
{                                              
    if(root1==NULL && root2==NULL)
      return 1;
      
    if(root1!=NULL && root2!=NULL)
    {
      int a,b,c;
      a=(root1->val==root2->val);
      b=check_mirror(root1->left,root2->right);
      c=check_mirror(root1->right,root2->left);
      if(a && b && c)
        return 1;
    }
    return 0;
}
int main()  
{  
    TreeNode *root1, *root2;           
    root1 = makeTreeNode(1);  
    root1->left = makeTreeNode(2);  
    root1->left->left = makeTreeNode(3);  
    root1->left->right = makeTreeNode(4);   
    root1->right = makeTreeNode(5);  
    root1->right->right = makeTreeNode(7);  
  
    root2 = makeTreeNode(1);  
    root2->left = makeTreeNode(5);  
    root2->left->left = makeTreeNode(7);  
    root2->right = makeTreeNode(2);  
    root2->right->left = makeTreeNode(4);  
    root2->right->right = makeTreeNode(3); 
	 
    int ans=check_mirror(root1,root2);  
    if(ans)
    cout<<"YES, trees are mirror."<<endl;  
  else
    cout<<"NO, trees are not mirror."<<endl;  
   
    return 0;  
}
