#include<iostream>
using namespace std;
int countInversions(int arr[],int n)
{
	int count=0;
	for(int i=0;i<=n;i++){
		for(int j=i+1;j<=n-1;j++){
			if(arr[i]>arr[j]){
				count++;
			}
		}
   }
   return count;
}
int main(){
	int arr[6];
	int n=sizeof(arr);
	for(int t=0;t<=6;t++){
		cin>>arr[t];
	}
	cout<<countInversions(arr,n);
	return 0;
}
