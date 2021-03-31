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
#include <iostream>

class Node {
  public:
    int data;
    Node* next;
};

// This function prints contents of linked list
// starting from the given node
void print(Node* n)
{
  while (n != NULL) 
  {
    std::cout << n->data << " ";
    n = n->next;
  }
  std::cout<<"\n";
}

void insert(int data)
{
  
}

int main()
{
  // linked list is represented by the head, not the entire list like a static array.
  
// allocate 3 nodes in the heap
  Node* head = new Node();
  Node* second = new Node();
  Node* third = new Node();
  
  head->data = 1; // assign data in first node
  head->next = second; // Link first node with second
  
  second->data = 2; // assign data to second node
  second->next = third;
  
  third->data = 3; // assign data to third node
  third->next = NULL;
  
  print(head);
  
  return 0;
}
