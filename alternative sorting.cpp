#include <bits/stdc++.h> 
using namespace std; 
 
void SortAlt(int arr[]) 
{ 
    sort(arr, arr+sizeof(arr));  //sorting of array
    int i = 0, j = sizeof(arr)-1; 
    while (i < j) { 
        cout << arr[j--] << " "; 
        cout << arr[i++] << " "; 
    } 
}
int main(){ 
    int arr[] = {1,6,4,9}; 
    SortAlt(arr); 
    return 0; 
} 
