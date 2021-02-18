//a recursive function when called at last at the time of recursive call is termed as tail recursive
#include<iostream>
using namespace std;
int fibonacci(int f,int x,int y){
	if(f==0){
		return x;
	}
	if(f==1){
		return y;
	}
	return fibonacci(f-1,y,x+y);
}
int main(){
	int x=0,y=1;
	int f;
	cin>>f;
	cout<<fibonacci(f,x,y);
	return 0;
}
