#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *next;
};
//function to push values in linked list
void fillin_list(struct node **head,int data){
	struct node *node;
	node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
    node->next=(*head);
    (*head)=node;
}
//function to reverse nodes in list
void rev_func(struct node **head){
	struct node *temp=NULL;
	struct node *prev=NULL;
	struct node *curr=(*head);
	while(curr!=NULL){
		temp=curr->next;
		curr->next=prev;
		prev=curr;
		curr=temp;
	}
	(*head)=prev;
}
//function to print nodes we entered
void print(struct node *p){
	while(p!=NULL){
		cout<<p->data<<" "<<endl;
		p=p->next;
	}
}
int main(){
	struct node *p=NULL;
	fillin_list(&p,13);
	fillin_list(&p,15);
	fillin_list(&p,17);
	fillin_list(&p,19);
	fillin_list(&p,21);
	print(p);
	rev_func(&p);
	cout<<endl;
	print(p);
	return 0;
}

