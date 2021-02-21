#include<bits/stdc++.h>
struct node{
	int data;
	node* l;
	node* r;
};
node* show(int x){
	node* temp=(node*)malloc(sizeof(node));
	temp->data=x;
	temp->l=NULL;
	temp->r=NULL;
	return temp;
}
int calc(node* root){
	if(root==NULL){
		return 0;
	}
	int lh=calc(root->l);
	int rh=calc(root->r);
	return max(lh,rh)+1;
}
int diameter(node* root){
	if(root==NULL){
		return 0;
	}
	int lh=calc(root->l);
	int rh=calc(root->r);
	int ld=diameter(root->l);
	int rd=diameter(root->r);
	return max(lh+rh+1,max(ld,rd));
}
int main(){
	node* root=show(1);
	root->l=show(2);
	root->l->r=show(3);
	root->l->r->l=show(4);
	root->l->r->r=show(5);
	root->r=show(6);
	root->r->l=show(7);
	root->r->l->r=show(8);
	root->r->r=show(9);
	root->r->r->r=show(10);
	root->r->r->r->r=show(11);
	int d=diameter(root);
	cout<<d<<endl;
}
