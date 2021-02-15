#include <iostream>
using namespace std;
int MissingNum(int arr[], int num)
{
 
    int sum = (num * (num + 1)) / 2;
    for (int i = 0; i < num; i++)
        sum =sum-arr[i];
    return sum;
}
int main()
{
    int arr[] = { 2, 4, 5, 6 };
    int num = sizeof(arr)/sizeof(arr[0]);
    MissingNum(arr, num);
    return 0;
}
