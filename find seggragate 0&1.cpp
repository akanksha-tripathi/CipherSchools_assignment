#include<iostream>
using namespace std;
void Findseggregate(int arr[]){
	int left=0;
	int right=sizeof(arr)-1;
	while(left<right){
		if(arr[left]==0){
			left++;
		}
		if(arr[right]==1){
			right--;
		}
		if(left<right){
			arr[left]=0;
			arr[right]=1;
			left++;
			right--;
		}
	}
}
int mai(){
	int arr[]={0,1,1,0,0,1,1};
	Findseggregate(arr);
	for(int i=0;i<7;i++){
		cout<<arr[i];
	}
	
}
