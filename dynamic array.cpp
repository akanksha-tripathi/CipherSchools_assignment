#include<iostream>
using namespace std;
int main() {
   int i,n;
   cout<<"number of elements:"<<"\n";
   cin>>n;
   int *arr = new int(n);
   for(i = 0;i<n;i++) {
      cin>>arr[i];
   }
   for(i = 0;i<n;i++) {
      cout<<arr[i]<<" ";
   }
   return 0;
}
