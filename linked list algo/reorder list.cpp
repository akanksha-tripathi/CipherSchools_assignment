#include<iostream>
#include<vector>
using namespace std;
class ListNode{
   public:
   int val;
   ListNode *next;
   ListNode(int data){
      val = data;
      next = NULL;
   }
};
ListNode *make_list(vector<int> v){
   ListNode *head = new ListNode(v[0]);
   for(int i = 1; i<v.size(); i++){
      ListNode *ptr = head;
      while(ptr->next != NULL){
         ptr = ptr->next;
      }
      ptr->next = new ListNode(v[i]);
   }
   return head;
}
void print_list(ListNode *head){
   ListNode *ptr = head;
   cout << "[";
   while(ptr){
      cout << ptr->val << ", ";
      ptr = ptr->next;
   }
   cout << "]" << endl;
}
class Solution {
   public:
   ListNode* successor = NULL;
   ListNode* reverse(ListNode* head, ListNode* prev = NULL){
      if(!head)return prev;
      ListNode* temp = head->next;
      head->next = prev;
      prev = head;
      return reverse(temp, prev);
   }
   void reorderList(ListNode* head) {
      if(!head)return;
      ListNode* slow = head;
      ListNode* fast = head;
      while(fast && fast->next){
         slow = slow->next;
         fast = fast->next->next;
      }
      fast = reverse(slow->next);
      slow->next = NULL;
      slow = head;
      ListNode *temp1, *temp2;
      while(fast){
         temp1 = slow->next;
         temp2 = fast->next;
         slow->next = fast;
         fast->next = temp1;
         slow = temp1;
         fast = temp2;
      }
   }
};
main(){
   vector<int> v = {1,2,3,4,5};
   ListNode *h1 = make_list(v);
   Solution ob;
   (ob.reorderList(h1));
   print_list(h1);
}
