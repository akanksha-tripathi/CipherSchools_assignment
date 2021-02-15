#include<iostream>
using namespace std;
void mergesortedarrays(int arr1[],int arr2[],int temp[],int n1,int n2){
	int i=0;
	int j=0;
	int k=0;
	while(i<n1&&j<n2){
		if(arr1[i]<arr2[j]){
			temp[k++]=arr1[i++];
		}
		else{
			temp[k++]=arr2[j++];
		}
	}
	while(i<n1){
		temp[k++]=arr1[i++];
	}
	while(j<n2){
		temp[k++]=arr2[j++];
	}
}
int main()
{
	int arr1[5];
	int arr2[4];
	int temp[10];
	int n1=sizeof(arr1);
	int n2=sizeof(arr2);
	for(int t=0;t<5;t++){
		cin>>arr1[t];
	}
	for(int x=0;x<4;x++){
		cin>>arr2[x];
	}
	temp[n1+n2];
	mergesortedarrays(arr1,arr2,temp,n1,n2);
	for(int i=0;i< n1+n2;i++){
		cout<<temp[i]<<endl;

	}
	return 0;
}

