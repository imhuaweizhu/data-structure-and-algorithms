/* A tree has following general properties:
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

Reference: http://www.cs.cmu.edu/~clo/www/CMU/DataStructures/Lessons/lesson4_1.htm
CMU course 15-111: Intermediate and Advanced Programming (2005 - 2008) by Prof. Ananda Gunawardena
*/






