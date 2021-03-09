# Data Structure

## The top data structures you should know for your next coding interview 
from https://www.freecodecamp.org/news/the-top-data-structures-you-should-know-for-your-next-coding-interview-36af0831f5e3/

1. Arrays
2. Stacks
3. Queues
4. Linked Lists
5. Trees
6. Graphs
7. Tries (they are effectively trees, but it’s still good to call them out separately).
8. Hash Tables

## A Data structure is composed of 
from https://en.wikipedia.org/wiki/Data_structure

1. A collection of data items.
2. The relationships among the data items.
3. The operations that can be applied to the data structure.


## Common operations on various Data Structures
from https://www.geeksforgeeks.org/common-operations-on-various-data-structures/

A data structure to be efficient in some operations and inefficient in others. Your goal is to understand data structures so that you can pick the data structure that’s most optimal for the problem at hand.

1. Access: Get a data item in the given data structure.
2. Insert: Add a data item in the given data structure.
3. Delete: Delete a data item in the given data structure.
4. Search: Find a particular data item in the given data structure.

## Types of data structures
Modified based on a picture from https://techieshouts.com/types-of-data-structures/

<img src="https://user-images.githubusercontent.com/34038625/110526560-f0c05480-80e3-11eb-8262-3240aba2af15.png" width="400">


### Primitive Data Structure
Predefined data types. They are supported by all programming languages. All the programming languages like java, c#, or any object-oriented programming language are all inherited from C and C++. For example:

Integer, Float, Char, Boolean, Pointer

### Non-primitive Data Structure

Not predefined in programming languages. They can be implemented with the help of primitive data types.

#### 1. Linear: The data items are arranged in a sequential manner.
##### (1) static: the length (maximum number of elements that can be stored) is fixed.
###### ----- Array
##### (2) dynamic: the length (maximum number of elements that can be stored) increases or decreases in real time.
###### ----- Linked List, Stack, Queue

#### 2. Nonlinear: The data items are NOT arranged in a sequential manner (e.g. a random manner)
###### ----- Hash table, Tree, Graph


### The picture below shows how these data structures look like.
from https://www.hellocodeclub.com/when-to-use-which-data-structure-top-6-data-structures/

![wp1](https://user-images.githubusercontent.com/34038625/110526836-4a288380-80e4-11eb-8478-ebb8948bc681.jpg)



# Algorithms

## Aymptotic notations for algorithms
from https://algs4.cs.princeton.edu/cheatsheet/
1. Space Complexity
2. Time Complexity: Most of the time, we look at Big-Oh(asymptotic upper bound), Big-Omega(asymptotic lower bound) and Big-Theta(when big-oh and big-omega are the same)

<img width="600" alt="Screen-Shot-2021-01-24-at-3 02 10-PM" src="https://user-images.githubusercontent.com/34038625/110528531-3ed65780-80e6-11eb-982b-67e68e38398e.png">

## Efficiency of different data structures
from https://www.bigocheatsheet.com/

<img width="600" alt="Screen-Shot-2021-01-24-at-5 47 31-PM" src="https://user-images.githubusercontent.com/34038625/110535836-c1631500-80ee-11eb-8932-18538bbeecea.png">

## Patterns of algorithms

By Ray Toal, a Professor of Computer Science at Loyola Marymount University 
from https://cs.lmu.edu/~ray/notes/algpatterns/

### Brute Force: 

Enumerate all possible solutions, **unintelligently**, and try them all until you find a solution. Not really a “pattern”. You could in theory, do Traveling Salesperson, Knapsack, or Subset Sum this way, but don’t.

### The Greedy Method

Solving a problem by doing the "best looking" thing at each step. (May miss a solution, or may miss the optimal one. But in some cases where it is known to work, it is a great approach.). 

For example: Minimum Spanning Trees, Huffman Compression, Dijkstra’s Shortest Path and etc.

### Dynamic Programming

Solving an optimization problem by breaking down a problem into multiple **overlapping** subproblems, not independent ones. Solve the subproblems (recursively), and combine those solutions into a solution for the original problem. **The idea is to cache the results of overlapping subproblems**. Can be done bottom up (table construction) or top-down (recursive with memoization). 

For example: Integer knapsack, Traveling salesperson and etc.

### Divide and Conquer

Breaking down a problem into multiple **independent** subproblems, solving the subproblems (recursively), and combining those solutions into a solution for the original problem. 

For example: Mergesort, quicksort, Matrix Multiplication, FFT, Nearest Neighbors and etc.

### Decrease and Conquer

A variant of divide and conquer, where the problem is broken down into **one** subproblem, not multiple subproblems. 

For example: Binary search, Selection Sort, Factorial, Topological Sort and etc.

### Backtracking

A method for systematically generating possible solutions to a problem in which you sometimes have to **back up** when realizing your paritally generated candidate **can’t** possibly be extended to a real solution. 

For examples: Knight’s Tour, Maze solving, Generic path finding and etc.

### Branch and Bound

**Backtracking** applied to **optimization** problems. 

For example: Integer programming, Nearest neighbor search, Nonlinear programming and etc.

### Particle Swarm Optimization

Solving an optimization problem with a bunch of **decentralized** particles all searching for a solution with something that looks like its has **a collective organization** (e.g. ant colonies, bird flocks, animal herds, etc.). 

For examples, Neural network training, Finite element updating and etc.

### Randomized Algorithms

#### 1. Las Vegas

A **randomized** algorithm that always produces the **correct answer** but makes **no time or space guarantees** it needs (in the worst case).

Used as a defense against algorithm complexity attacks. For example: Finding a value in a collection, Randomized Quicksort

#### 2. Monte Carlo

A randomized algorithm that has **time and space guarantees** but has a small probablility of giving the **wrong answer**(But Las Vegas can guarantee giving the right answer). The probability of error can be reduced by running the algorithm longer.

Used when all known deterministic algorithms for a problem are too slow, or when **estimation** is an inherent part of the problem. For examples: Miller-Rabin primality test, Approximating π (by throwing darts), Approximating integrals
Game playing.


### Hill Climbing

Solving (or finding an approximate solution to) an optimization problem by generating candidate solutions that are (hopefully) **improvements** over the previous candidate. 

For example: **Basic Hill Climbing** chooses the "best" next step, **Genetic algorithms** choose a genetic mutation of the previous candidate. **Simulated Annealing** makes the next choice based on a particular formula used in metallurgy.

### Transformation

Solving a problem by reducing, or transforming, it to a similar (usually easier) problem whose solution implies a solution to the original. Also known as transform and conquer.

### Preprocessing

Playing tricks with the input (input enhancement) or building up a cache (prestructuring) prior to doing the official run.

For examples: Table of counts for counting sort, Boyer-Moore pattern matching, Storing often used data in a hashtable, Store often used data in a search tree (B-tree, BST, Red-black, ...), Heapify, prior to heapsort



