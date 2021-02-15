#include <iostream>
using namespace std;
int largestsumofArray(int arr[]){
	int x=0,beg=0,end=0,max_ending=0,max_till=0;
	for(int i=0;i<sizeof(arr);i++){
		max_till=max_till+arr[i];
		if(max_till<max_ending){
			max_till=max_ending;
			beg=x;
			end=i;
		}
		if(max_ending<0){
			max_ending=0;
			x=i+1;
		}
	}
	cout<<max_till<<endl;
}
int main(){
	int arr[]={-5,-6,8,0,4,-8,7};
	largestsumofArray(arr);
	return 0;
}
