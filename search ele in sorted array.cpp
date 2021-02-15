//using binary search
#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int beg,int end,int value){
	int mid=(beg+end)/2;
	if(arr[mid]==value){
		return mid;
	}
	if(arr[1]<=arr[mid]){
		if(value>=arr[1]&&value<=arr[mid]){
			return search(arr,1,mid-1,value);
		}
	
        return search(arr,mid+1,end,value);
	}
	if(value>=arr[mid]&&value<=arr[end]){
		return search(arr,mid+1,end,value);
	}
	return search(arr,1,mid-1,value);
}
int main(){
	int arr[]={4,6,7,8,9,11,45};
	int value=11;
	int n=sizeof(arr)/sizeof(arr[0]);
	int x=search(arr,0,n-1,value);
	if(x!=-1){
		cout<<x<<endl;
	}
	else{
		cout<<"value missing";
	}
}

