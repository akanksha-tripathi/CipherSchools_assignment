#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *next;
};
struct node* top=NULL;
void enter(int k){
	struct node* newnode=(struct node*) malloc(sizeof(struct node));
	newnode->data=k;
	newnode->next=top;
	top=newnode;
}
void pop(){
	if(top==NULL){
		cout<<"underflow"<<endl;
	}
	else{
		cout<<top<<endl;
		top=top->next;
	}
}
void display(){
	struct node* ptr;
	if(top==NULL){
		cout<<"stack is empty";
	}
	else{
		ptr=top;
		cout<<"stack elements are";
		while(ptr!=NULL){
			cout<<ptr->data<<" ";
			ptr=ptr->next;
		}
	}
	cout<<endl;
}
int main(){
	int ch,val;
	do{
		cin>>ch;
		switch(ch){
			case 1:{
				cin>>val;
				push(val);
				break;
			}
			case 2:{
				pop();
				break;
			}
			case 3:{
				display();
				break;
			}
			case 4:{
				cout<<"exit"<<endl;
				break;
			}
			default:{
				cout<<"invalid choice"<<endl;
				break;
			}
		}
	}while(ch!=4);
	return 0;
}
