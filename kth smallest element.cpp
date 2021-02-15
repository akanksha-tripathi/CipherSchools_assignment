#include<iostream>
using namespace std;
void KthSmallestElement(int arr[],int k)
{
	for(int i=k;i<sizeof(arr);i++)
	{
		int max=arr[k-1];//we tend to store maximum elements in max data type
		int max_pos=k-1;
		for(int j=k-2;j>=0;j--){
			if(arr[j]>max){
				max=arr[j];
				max_pos=j;
			}
		}
		int currele=arr[i];//this takes current element 
		if(max>currele){
			int m=max_pos;
			
			while(m<k-1){
				arr[m]=arr[m+1];
				m++;
			}
			arr[k-1]=currele;
		}
		for(int i=0;i<k;i++){
		cout<<arr[i]<<endl;
	    }
	}
}
int main(){
	int arr[]={450,670,100,430,700};
	KthSmallestElement(arr,3);//here we will know 3 smallest element in array
	return 0;
}
