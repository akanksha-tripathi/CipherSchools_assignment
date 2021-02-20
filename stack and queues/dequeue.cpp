#include<iostream>
using namespace std;
#define SIZE 10
class dequeue {
   int a[20],f,r;
   public:
      dequeue();
      void insert_at_beg(int);
      void insert_at_end(int);
      void delete_fr_front();
      void delete_fr_rear();
      void show();
};
dequeue::dequeue() {
   f=-1;
   r=-1;
}
void dequeue::insert_at_end(int i) {
   if(r>=SIZE-1) {
      cout<<"\n insertion is not possible, overflow!!!!"<<endl;
   } else {
      if(f==-1) {
         f++;
         r++;
      } else {
         r=r+1;
      }
      a[r]=i;
      cout<<"\nInserted item is"<<a[r]<<endl;
   }
}
void dequeue::insert_at_beg(int i) {
   if(f==-1) {
      f=0;
      a[++r]=i;
      cout<<"\n inserted element is:"<<i<<endl;
   } else if(f!=0) {
      a[--f]=i;
      cout<<"\n inserted element is:"<<i<<endl;
   } else {
      cout<<"\n insertion is not possible, overflow!!!"<<endl;
   }
}
void dequeue::delete_fr_front() {
   if(f==-1) {
      cout<<"deletion is not possible::dequeue is empty"<<endl;
      return;
   }
   else {
      cout<<"the deleted element is:"<<a[f]<<endl;
      if(f==r) {
         f=r=-1;
         return;
      } else
         f=f+1;
      }
   }
   void dequeue::delete_fr_rear() {
      if(f==-1) {
         cout<<"deletion is not possible::dequeue is empty"<<endl;
         return;
      }
      else {
         cout<<"the deleted element is:"<<a[r]<<endl;
         if(f==r) {
            f=r=-1;
         } else
            r=r-1;
      }
   }
   void dequeue::show() {
      if(f==-1) {
         cout<<"Dequeue is empty"<<endl;
      } else {
         for(int i=f;i<=r;i++) {
            cout<<a[i]<<" ";
         }
      }
   }
   int main() {
      dequeue dq; 
    cout<<"Insert element 1 at rear end \n"<<endl; 
    dq.insert_at_end(1); 
   
    cout<<"insert element 3 at rear end \n"<<endl; 
    dq.insert_at_end(3); 
    dq.show(); 
   
    dq.delete_fr_rear(); 
    dq.show();
   
    cout<<"inserting element 5 at front end \n"<<endl; 
    dq.insert_at_beg(5); 
    dq.show(); 
    dq.delete_fr_front(); 
    dq.show();
    return 0;

}
