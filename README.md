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

1. Brute Force: <span style="color:blue">some *blue* text</span>.Enumerate all possible solutions, unintelligently, and try them all until you find a solution. Not really a “pattern”. You could in theory, do Traveling Salesperson, Knapsack, or Subset Sum this way, but don’t.
2. Divide and Conquer: Breaking down a problem into multiple independent subproblems, solving the subproblems (recursively), and combining those solutions into a solution for the original problem. e.g. Mergesort, quicksort, Matrix Multiplication, FFT, Nearest Neighbors etc.
3. 
