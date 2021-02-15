#include<iostream>
using namespace std;

//to check first position of element 
int first(int arr[], int a, int n)
{
    int low = 0, high = n - 1, sum = 0;
    while (low <= high) {
    
        int mid = (low + high) / 2;
        if (arr[mid] > a)
            high = mid - 1;
        else if (arr[mid] < a)
            low = mid + 1;
 
        else {
            sum= mid;
            high = mid - 1;
        }
    }
    return sum;
}
 
//last position of array
int last(int arr[], int a, int n)
{
    int low = 0, high = n - 1, sum= 0;
    while (low <= high) {
        
        int mid = (low + high) / 2;
        if (arr[mid] > a)
            high = mid - 1;
        else if (arr[mid] < a)
            low = mid + 1;
        else {
            sum = mid;
            low = mid + 1;
        }
    }
    return sum;
}

int main()
{
    int arr[] = {6,8,55,87,99 };
    int n = sizeof(arr) / sizeof(int);
 
    int a = 99;
    printf(first(arr, a, n));
    printf(last(arr, a, n));
 
    return 0;
}

