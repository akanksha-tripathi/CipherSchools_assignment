#include <iostream>
using namespace std;

void MajorityNum(int arr[],int n){
	int count=0,max_count=0,index=0;
	for(int i=0;i<n;i++){
		for (int j=0;j<=n;j++){
			if(arr[i]==arr[j]){
				count++;
			}
	}
		if(count>max_count)	{
			max_count=count;
		}
	}
	if(max_count>n/2)
		cout<<arr[index];
	else
	    cout<<"no such element";
}
int main() {
    int arr[7];
    for (int t = 0; t < 7; ++t) {
        cin >> arr[t];
    }
    int n=sizeof(arr)/sizeof(arr[0]);
    
    MajorityNum(arr,n);
    return 0;
    
}

