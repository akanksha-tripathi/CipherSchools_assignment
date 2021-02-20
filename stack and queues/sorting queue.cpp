
#include<iostream>
using namespace std;
class queue
{
 int arr[200],front,end,len;
 public:
 queue(int x)
 {
 front=-1;
 end=-1;
 len=x;
 }
 void enqueue(int x)
 {
 if(is_empty())
 {
 front++;
 end++;
 arr[end]=x;
 }
 else if(is_full())
 {
 cout<<"Queue is full "<<endl;
 }
 else
 {
 end=(end+1)%len;
 arr[end]=x;
 }
 }
 int dequeue()
 {
 if(is_empty())
 {
 return 0;
 }
 else if (front==end)
 {
 int a=arr[front];
 front=-1;
 end=-1;
 return a;
 }
 else
 {int a = arr[front] ;
 front = (front+1)%len;
 return a;
 }
 }
 int is_empty()
 {
 if(front==-1)
 return 1;
 else
 return 0;
 }
 int is_full()
 {
 if((end+1)%len==front)
 return 1;
 else 
 return 0;
 }
 void print()
 {
 int a =front;
 do
 {
 cout<<arr[a]<<" ";
     a = (a+1)%len ;
 }
 while(a!=(end+1)%len);
     cout<<endl;
 }
    void sort()
 {
 int a , b , i=0  , j , check;
 int l = len ;
 while(l--)
 { 
 if(is_empty())
 break;
 a = dequeue() ;
 if(is_empty())
 break;
 b = dequeue() ;
 j = len-i-1 ;
 while(j--)
 {
 if(a<b)
 {
 
 if(front!=0)
 {
 enqueue(a);
 a = dequeue(); 
 }
 else
 break ;
 }
 else
 {
 if(front!=0)
 {
 enqueue(b);
 b = dequeue();
 }
 else
 break ;
 }
 }
 if(a>b)
 {
 enqueue(b);
 enqueue(a);
 }
 else
 {
 enqueue(a);
 enqueue(b);
 }
 front = 0 ;
 end = len-1;
 i++;
 }
 }
};
int main()
{
 int a,num;
 cout<<"Enter the number of elements : " ;
 cin>>num;
 queue q(num);
 cout<<"enter element in queue "<<endl;
 while(num--)
 {
 cin>>a;
 q.enqueue(a);
 }
 q.print();
 q.sort();
 cout<<"Sorted Queue"<<endl;
 
 q.print();
 return 0;
 
}
