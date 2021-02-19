#include <stdio.h>   
struct node{  
    int data;  
    struct node *next;  
};      
struct node *head, *tail = NULL;  
  
void addNode(int data) {  
    //Create a new node to the lists  
    struct node *newNode = (struct node*)malloc(sizeof(struct node));  
    newNode->data = data;  
    newNode->next = NULL;    
    if(head == NULL) {   
        head = newNode;  
        tail = newNode;  
    }  
    else {  
        tail->next = newNode;   
        tail = newNode;  
    }  
}  
  
    void sorting() {   
        struct node *current = head, *index = NULL;  
        int temp;  
          
        if(head == NULL) {  
            return;  
        }  
        else {  
            while(current != NULL) {  
                index = current->next;  
                  
                while(index != NULL) {  
                    //If current node's data is greater than index's node data, swap the data between them  
                    if(current->data > index->data) {  
                        temp = current->data;  
                        current->data = index->data;  
                        index->data = temp;  
                    }  
                    index = index->next;  
                }  
                current = current->next;  
            }      
        }  
    }  
   
//display() will display all the nodes present in the list  
void display() {  
    //Node current will point to head  
    struct node *current = head;  
    if(head == NULL) {  
        printf("List is empty \n");  
        return;  
    }  
    while(current != NULL) {  
        printf("%d \n", current->data);  
        current = current->next;  
    }  
}  
      
int main()  
{  
    //Adds data to the list  
    addNode(9);  
    addNode(7);  
    addNode(2);  
    addNode(5);  
    addNode(4);    
    //Sorting list  
    sorting();  
    display();  
          
    return 0;  
}  
