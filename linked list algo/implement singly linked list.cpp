#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *next;
};
 struct node *head=NULL;
 void insertion(int n){
 	struct node *newentry=new node;
 	newentry->data=n;
 	newentry->next=head;
 	head=newentry;
 }
 void display(){
 	if(head==NULL){
 		cout<<"list has no entry"<<endl;
 		return;
	 }
	struct node *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
 }
 void deletion(){
 	if(head==NULL){
 		cout<<"list has no value"<<endl;
 		return;
	 }
	cout<<head->data<<"value is removed"<<endl;
	head=head->next;
 }
 int main(){
 	display();
 	insertion(15);
 	insertion(48);
 	insertion(20);
 	insertion(25);
 	display();
 	deletion();
 	display();
	 return 0;
 }
 

