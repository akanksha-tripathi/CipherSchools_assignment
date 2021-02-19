#include<iostream>
using namespace std;
#define Size(arr) (sizeof(arr)/sizeof(arr[0]))
struct node{
	int data;
	struct node *next;
};
node *list(int *arr,int n){
	node *head,*p;
	p=head=new node;
	head->data=arr[0];
	head->next=NULL;
	for(int i=1;i<n;++i)
	{
		p->next=new node;
		p=p->next;
		p->data=arr[i];
		p->next=NULL;
		
	}
return head;
}
void display(node *head){
	while(head!=NULL){
		cout<<head->data<<" "<<endl;
		head=head->next;
	}
}
node *merging(node *head1, node *head2){
	node *res=NULL;
	if(head1==NULL){
		return head2;
	}
	if(head2==NULL){
		return head1;
	}
	if(head1->data<head2->data){
		res=head1;
		res->next=merging(head1->next,head2);
	}
	else{
		res=head2;
		res->next=merging(head1,head2->next);
	}
	return res;
}
int maain(){
	int arr1[]={10,20,30};
	int arr2[]={5,7,9,11};
	node *head1,*head2,*res=NULL;
	head1=list(arr1,Size(arr1));
	head2=list(arr2,Size(arr2));
	cout<<endl;
	display(head1);
	cout<<endl;
	display(head2);
	display(res);
	return 0;
}
