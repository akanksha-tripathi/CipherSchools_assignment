#include<iostream>
using namespace std;
bool Subset(int arr,int n,int res){
	if(res==0){
		return true;
	}
	if(n<0||res<0){
		return false;
	}
	bool add=Subset(arr,n-1,res-arr[n]);
	bool remove=Subset(arr,n-1,res);
	return add || remove;
}
int main(){
	int arr[6];
	for(int i=0;i<6;i++){
		cin>>arr[i]>>endl;
	}
	int res;
	cin>>"result value">>res>>endl;
	int n=sizeof(arr)/sizeof(arr[0]);
	if(Subset(arr,n-1,res)){
		cout<<"sequence with sum exist";
	}
	return 0;
}

