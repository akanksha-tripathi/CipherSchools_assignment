#include<iostream>
#include<stack>
using namespace std;
void nextgreater(int arr[], int n)
{
    stack<int> data;
 
    data.push(arr[0]);
 
   for (int i=1; i<n; i++)
    {
        int next = arr[i];
 
        if (data.empty() == false)
        {
            int array_element = data.top();
            data.pop();
 
         while (array_element < next)
            {
                cout << array_element << ": " << next<< endl;
                if (data.empty() == true)
                   break;
                array_element = data.top();
                data.pop();
            }
 
           if (array_element > next)
                data.push(array_element);
           }
 
          data.push(next);
         }
 
     } 
int main()
{
    int arr[] = {56,89,34,79,60,23,51};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i=0; i < n; i++) 
    cout << arr[i] <<" "<<endl;
    cout << "Next Greater Element:\n"<<endl;
    nextgreater(arr, n);
}
