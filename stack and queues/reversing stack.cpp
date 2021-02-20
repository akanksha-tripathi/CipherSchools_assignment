//using swap() operation
#include<bits/stdc++.h>
using namespace std;
int main(){
	stack<int> stack1;
	stack<int> stack2;
	stack1.push(4);
	stack1.push(6);
	stack1.push(8);
	
	stack2.push(3);
	stack2.push(5);
	stack2.push(7);
	stack2.push(9);
	
	swap(stack1,stack2);
	
	while(!stack1.empty()){
		cout<<stack1;
		stack1.pop();
	}
	while(!stack2.empty()){
		cout<<stack2;
		stack2.pop();
	}
	return 0;
}
