#include <iostream>
#include <array> // this is required if you need to use std:array
#include <vector> // this is required if you need to use std::vector


//=========================================================================================
// Write a generic print function which is capable of printing an array or vector of any datatype (eg. int, char, string etc.)
template <class InputIterator>
void print(InputIterator start, InputIterator end)
{
    //start and end are iterators(pointers)
    for(auto itr=start; itr!=end; ++itr)
    {
        //print the element giving the address of element, pay attention to the "*" sign.
        std::cout<<*itr<<", ";
    }
    std::cout<<std::endl;
}


//=========================================================================================
// C++ language built-in array
void build_in_array()
{
  // Initialize an array
  int test_array[] = {16, 2, 77, 40};
  
  // Get the length of an array
  int len = sizeof(test_array)/sizeof(test_array[0]);
  
  
  // Print out the array
  print(std::begin(test_array), std::end(test_array));
}


//=========================================================================================
// array from container library array
// More detail about this can be found at https://en.cppreference.com/w/cpp/container/array
void std_array()
{
  // Initialize an array
  std::array<int,3> test_array{10,20,30};

  // Get the length of an array
  int len = test_array.size();

  //print out the array
  print(test_array.begin(), test_array.end());
}



// dynamic array, which is defined as std::vector 
// std::array and std::vector are different
// Elements in std::array are arranged in a contiguous memory allocation, std::array has fixed size
// std::vector is dynamic memory allocated, size increases with insertion of elements.
void std_vector()
{
  
    // Create a vector containing integers
    std::vector<int> test_vector = { 7, 5, 16};
 
    // Add two more integers to vector
    test_vector.push_back(25);
    test_vector.push_back(13);
 
    // Print out the vector
    print(test_vector.begin(), test_vector.end());

}

/*==================================
  ==================================
  main function has to return "int"
  ==================================
  =================================*/
int main ()
{
  // two ways to create an array in C++
  
  // first way
  // static linear data structure, fixed size
  build_in_array();
  
  // second way
  // static linear data structure, fixed size
  std_array();
  
  // dynamic array, size inscreases.
  std_vector();
  
  // return
  return 0;
}
