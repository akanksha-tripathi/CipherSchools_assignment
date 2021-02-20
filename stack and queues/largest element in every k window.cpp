#include<iostream>
#include<stack>
using namespace std;
void slidingwindow(int arr[],int n,int k){
	int j,m;
	for(int i=0;i<=n-k;i++){
		m=arr[i];
		for(j=1;j<k;j++){
			if(arr[i+j]>m){
				m=arr[i+j];
			}
		}
		cout<<m<<"=>";
	}
}
int main(){
	int arr[]={3,5,7,9,11,13,15,17,19};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=2;
	slidingwindow(arr,n,k);
	return 0;
}
