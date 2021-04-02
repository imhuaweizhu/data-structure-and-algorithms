/*
A linked list is represented by a pointer to the first node-->the head of the linked list. 

The first node is called the head. 
If the linked list is empty, then the value of the head is NULL.

Each node in a list consists of at least two parts:
1) data
2) Pointer (Or Reference) to the next node

Advantages over static arrays
1) Dynamic size
2) Ease of insertion/deletion

Drawbacks:
1) Random access is not allowed. We have to access elements sequentially starting from the head.
2) Extra memory space for a pointer is required with each element of the list.
3) Not cache friendly, because elements are not in contiguous locations.


Reference: https://www.geeksforgeeks.org/linked-list-set-1-introduction/
*/
// Linkedlist implementation using Classes in C++
#include <iostream>
using namespace std;

class Node 
{
  public:
    int data;
    Node* next;
};


class LinkedList
{
  //By default, it's private
  Node* head;
  public:
    // constructor
    LinkedList() 
    { 
      head = NULL;
    }
    // destructor
    ~LinkedList() 
    {
    }; 
    // add a node
    void add_node(int value);
    void reverse_list();
    void print();
};


void LinkedList::add_node(int val)
{
  // set up a new node
  Node* newnode = new Node();
  newnode->data = val;
  newnode->next = NULL;
  // put the new node in the right position in the list
  if (head == NULL) 
  {
    head = newnode;
  }
  else 
  {
    Node* temp = head; // head is not NULL
    while (temp->next != NULL) 
    { 
      temp = temp->next; // go to end of list
    }
    temp->next = newnode; // linking to newnode
  }
}

// reverse the Linked List
void LinkedList::reverse_list() 
{
  Node* temp = head;
  Node* nextnode = NULL;
  Node* revnode = NULL;
  while (temp != NULL) 
  {
    head = temp;
    nextnode = temp->next;
    temp->next = revnode;
    revnode = temp;
    temp = nextnode;
  }
}

void LinkedList::print() {
    if (head == NULL) {
        cout << "List is empty!" << endl;
    }
    else {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}

int main() {
    LinkedList* list = new LinkedList();
    list->print();

    list->add_node(1);
    list->add_node(1);
    list->add_node(2);
    list->add_node(5); 
    list->add_node(8);
    cout << "\nLinked List data: " << endl;
    list->print();

    list->reverse_list();
    cout << "\nReversed Linked List data" << endl;
    list->print();
    
    delete list;
    return 0;
}
