/*
A Doubly Linked List (DLL) contains an extra pointer, typically called previous pointer, 
together with next pointer and data which are there in singly linked list.

Advantages over singly linked list 
1) A DLL can be traversed in both forward and backward direction. 
2) The delete operation in DLL is more efficient if pointer to the node to be deleted is given. 
3) We can quickly insert a new node before a given node. 
In singly linked list, to delete a node, pointer to the previous node is needed. 
To get this previous node, sometimes the list is traversed. 
In DLL, we can get the previous node using previous pointer. 
 
 
Disadvantages over singly linked list 
1) Every node of DLL Require extra space for an previous pointer. 
It is possible to implement DLL with single pointer though.. 
2) All operations require an extra pointer previous to be maintained. 
For example, in insertion, we need to modify previous pointers together with next pointers. 
For example in following functions for insertions at different positions, we need 1 or 2 extra steps to set previous pointer.
*/
#include <iostream>
using namespace std;

class Node 
{
  public:
    int data;
    Node* next;
    Node* prev;
};


class DoublyLinkedList
{
  //By default, it's private
  Node* head;
  Node* tail;
  public:
    // constructor
    DoublyLinkedList() 
    { 
      head = NULL;
      tail = NULL;
    }
    // destructor
    ~DoublyLinkedList() 
    {
    }; 
    // add a node
    void add_node(int value);
    void print_forward();
    void print_backward();
};


void DoublyLinkedList::add_node(int val)
{
  Node* prev_node = tail;
  // set up a new node
  Node* newnode = new Node();
  newnode->data = val;
  newnode->next = NULL;
  // put the new node in the right position in the list
  if (head == NULL && tail == NULL) 
  {
    head = newnode;
    head->prev = NULL;
    tail = newnode;
    newnode->prev = NULL;
  }
  else 
  {
    Node* temp = head; // head is not NULL
    while (temp->next != NULL) 
    { 
      temp = temp->next; // go to end of list
    }
    temp->next = newnode; // linking to newnode
    tail = newnode;
    newnode->prev = temp;
  }
}

void DoublyLinkedList::print_forward() {
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

void DoublyLinkedList::print_backward() {
    if (head == NULL) {
        cout << "List is empty!" << endl;
    }
    else {
        Node* temp = tail;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->prev;
        }
        cout << endl;
    }
}

int main() {
    DoublyLinkedList* list = new DoublyLinkedList();
    list->print_forward();

    list->add_node(1);
    list->add_node(1);
    list->add_node(2);
    list->add_node(3); 
    list->add_node(5);
    list->add_node(8);
    list->add_node(13);
    cout << "\nLinked List data: " << endl;
    list->print_forward();

    cout << "\nLinked List data in a reverse order: " << endl;
    list->print_backward();

    
    delete list;
    return 0;
}
