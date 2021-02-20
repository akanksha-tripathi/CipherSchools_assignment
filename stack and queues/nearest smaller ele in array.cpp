#include<iostream>
#include<stack>
using namespace std;
void nextsmaller(int arr[],int n){
	stack<int> data;
	data.push(arr[0]);
	for(int i=1;i<n;i++){
		if(data.empty()){
			data.push(arr[i]);
			continue;
		}
		while(data.empty()== false && data.top()>arr[i]){
			cout<<data.top()<<"=>"<<arr[i]<<endl;
			data.pop();
		}
		data.push(arr[i]);
	}
	while(data.empty()==false){
		cout<<data.top()<<"=>"<<-1<<endl;
		data.pop();
	}
}

int main(){
	int arr[]={34,67,24,98,20,44};
	int n=sizeof(arr)/sizeof(arr[0]);
	nextsmaller(arr,n);
	return 0;
}
