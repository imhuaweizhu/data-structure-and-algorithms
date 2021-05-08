/*
Reference: http://www.cs.cmu.edu/~clo/www/CMU/DataStructures/Lessons/lesson4_1.htm
CMU course 15-111: Intermediate and Advanced Programming (2005 - 2008) by Prof. Ananda Gunawardena

A tree has following general properties:

1. One node is distinguished as a root;
2. Every node (exclude a root) is connected by a directed edge from exactly one other node; A direction is: parent -> children
3. Each node can have arbitrary number of children.

Terminology:
Leaves: Nodes with no children. Also called external nodes.
Internal nodes: Nodes that have at least one child.
Siblings: Nodes with the same parent.

Depth of a node: the number of edges from the root to the node.
Depth of a tree: the number of edges from the root to the deepest leaf.

Height of a node: the number of edges from the node to the deepest leaf. As you can see, this definition rely on the definition of depth of a node.
Height of a tree: the number of edges from the root to the deepest leaf.


*/

// CPP program to do level order traversal of a generic tree
#include <iostream>
#include <vector>

// Represents a node of an n-ary tree
class Node
{
public:
  int key;
  std::vector<Node *> child;
};

class GeneralTree
{
public:
  Node *root;
  // constructor
  GeneralTree(int data)
  {
    root->key = data;
    std::vector<Node *> children_list;
    root->child = children_list;
  }

  // deconstructor
  ~GeneralTree(){};

  void add_child(int value, Node *parent_node);
  void print();
};

void GeneralTree::add_child(int data, Node *parent_node)
{
  Node *newnode = new Node();
  newnode->key = data;
  std::vector<Node *> children_list;
  newnode->child = children_list;
  (parent_node->child).push_back(newnode);
}

void print()
{
}

// Driver program
int main()
{
  /*   Let us create below tree
    *            10
    *        /   /    \
    *        2  34    56
    *       / \        |
    *      77  88      1
    *      |
    *      23
    */
  GeneralTree gtree = GeneralTree(10);

  Node *temp_parent = gtree.root;
  gtree.add_child(2, temp_parent);
  gtree.add_child(34, temp_parent);
  gtree.add_child(56, temp_parent);
  std::cout << gtree.root->child[2]->key << "\n";

  temp_parent = gtree.root->child[0];
  gtree.add_child(77, temp_parent);
  gtree.add_child(88, temp_parent);
  std::cout << gtree.root->child[0]->child[0]->key << "\n";

  temp_parent = gtree.root->child[2];
  gtree.add_child(1, temp_parent);
  std::cout << gtree.root->child[2]->child[0]->key << "\n";

  temp_parent = gtree.root->child[0]->child[0];
  gtree.add_child(23, temp_parent);
  std::cout << gtree.root->child[0]->child[0]->child[0]->key << "\n";

  return 0;
}
