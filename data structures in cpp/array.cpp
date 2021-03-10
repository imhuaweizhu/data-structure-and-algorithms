#include <iostream>
#include <array> // this is required if you need to use container library

// c++ language built-in array
void build_in_array()
{
  // Initialize an array
  int foo[4] = {16, 2, 77, 40};
  
  // Get the length of an array
  int len = sizeof(foo)/sizeof(foo[0]);
  
  // Print out the array
  for ( int x : foo)
  {
    std::cout <<x<< ",";
  }
  std::cout << "\n";
}

// Container library array
void std_array()
{
  // Initialize an array
  std::array<int,3> myarray{10,20,30};
  
  //print out the array
  for (int x : myarray)
  {
    std::cout << x << ',';
  }
  std::cout << "\n";
}

/*==================================
  ==================================
  main function has to return "int"
  ==================================
  =================================*/
int main ()
{
  build_in_array();
  std_array();
  
  // return
  return 0;
}
