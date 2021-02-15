// C++ program to find peak element in given array by traversing
#include <iostream>
using namespace std;
int PeakEle(int arr[],int n){
	if(n==1)  //for first element as peak element
	   return arr[0];
	if(arr[n-1]>=arr[n-2]) //for last element as peak element
	   return n-1;
	   
	for(int i =1;i<=n-1;i++){
		//chaceking for other element
		if(arr[i]>=arr[i-1]&& arr[i]>=arr[i+1]){ //check for before and after element from that element
			return i;
		}
	}
}
int mai()
{
	int arr[5];
	for(int j=0;j<5;j++){
		cin >>arr[j];
	}
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<PeakEle(arr,n);
}
