#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Node
{
    int data;
    Node *next;
 
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
struct comp
{
    bool operator()(const Node *lhs, const Node *rhs) const
    {
        return lhs->data > rhs->data;
    }
};
 
// to print contents of a linked list
void print_List(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << "->";
        node = node->next;
    }
    cout << "nullptr";
}
Node *mergeKLists(Node *list[], int k)
{
    // create an empty min-heap
    priority_queue<Node*, std::vector<Node*>, comp> pq;
 
    // push the first node of each list into the min-heap
    for (int i = 0; i < k; i++)
    {
        pq.push(list[i]);
    }
 
    // where the head points to the first node and tail points to its last node
    Node *head = NULL, *last = NULL;
    while (!pq.empty())
    {
        Node *min = pq.top();
        pq.pop();
 
        // add the minimum node to the output list
        if (head == NULL)
        {
            head = last = min;
        }
        else
        {
            last->next = min;
            last = min;
        }
 
        // take the next node from the "same" list and insert it into the min-heap
        if (min->next != NULL)
        {
            pq.push(min->next);
        }
    }
 
    return head;
}
 
int main()
{
    int k = 3; // total number of linked lists
 
    // an array to store the head nodes of the linked lists
    Node *list[k];
 
    list[0] = new Node(1);
    list[0]->next = new Node(5);
    list[0]->next->next = new Node(7);
 
    list[1] = new Node(2);
    list[1]->next = new Node(3);
    list[1]->next->next = new Node(6);
    list[1]->next->next->next = new Node(9);
 
    list[2] = new Node(4);
    list[2]->next = new Node(8);
    list[2]->next->next = new Node(10);
 
    // Merge all
    Node *head = mergeKLists(list, k);
    print_List(head);
 
    return 0;
}




