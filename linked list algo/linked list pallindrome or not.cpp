/*
First, traverse the whole linked list, storing the value.
Traverse again, this time popping out elements from the stack
 and comparing them with the elements in the linked list. 
If all the elements are the same, then the linked list is a palindrome
*/
#include<bits/stdc++.h>
using namespace std;
class node{
public:
	int data;
	node(int d){
		data=d;
	}
	node *next;
};
bool pallindrome(node* head){
	node* n=head;
	stack<int> s;
	while(n!=NULL){
		s.push(n->data);
		n=n->next;
	}
	while(head!=NULL){
		s.push(n->data);
		n=n->next;
	}
	while(head!=NULL){
		int i=s.top();
		if(head->data!=i){
			return false;
		}
		s.pop();
		head=head->next;
	}
return true;
}
int main(){
	node zero=node(0);
	node one=node(2);
	node two=node(4);
	node three=node(2);
	node four=node(0);
	
	four.next=NULL;
	one.next=&two;
	two.next=&three;
	three.next=&four;
	node* temp=&one;
	int res=pallindrome(&one);
	if(res==1){
		cout<<"list is a pallindrome";
	}
	else{
		cout<<"list isn't a palindrome";
	}
	return 0;
}

