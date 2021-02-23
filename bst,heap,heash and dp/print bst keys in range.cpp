#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *left;
	struct node *right;
};
void printing(node *root, int k1, int k2) 
{ 
    if ( NULL == root ) 
        return; 
    if ( k1 < root->data ) 
        printing(root->left, k1, k2);
    if ( k1 <= root->data && k2 >= root->data ) 
        cout<<root->data<<" ";
    if ( k2 > root->data ) 
        printing(root->right, k1, k2); 
} 
struct node* newnode(int data){
	struct node *temp=new struct node;
	temp->data= data;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
int main(){
	struct node *root=new struct node;
	int k1=0,k2=25;
	root=newnode(20);
	root->left=newnode(8);
	root->right=newnode(22);
	root->left->left=newnode(4);
	root->left->right=newnode(12);
	printing(root,k1,k2);
	return 0;
}
