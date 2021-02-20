#include<iostream>
#include<queue>
#include<stack>
using namespace std;
class Stack
{
	public:
		queue<int> q1,q2;
		void push(int);
		void pop();
};
void Stack :: push(int n){
	while(!q1.empty()){
		q2.push(q1.front());
		q1.pop();
	}
	q1.push(n);
	while(!q2.empty()){
		q1.push(q2.front());
		q2.pop();
	}
}
void Stack :: pop(){
	if(q1.empty()){
		cout<<"underflow";
	}
	int front=q1.front();
	q1.pop();
	cout<<front;
}
int main(){
	int n,num;
	Stack s;
	cout<<"enetr number of elements to be entered";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>num;
		s.push(num);
	}
	for(int i=0;i<<n;i++){
		cout<<endl;
		s.pop();
	}
	return 0;
}
