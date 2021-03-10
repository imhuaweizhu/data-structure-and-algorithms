#include <iostream>
#include <array> // this is required if you need to use container library

// c++ language built-in array
void build_in_array()
{
  // Initialize an array
  int test_array[4] = {16, 2, 77, 40};
  
  // Get the length of an array
  int len = sizeof(test_array)/sizeof(test_array[0]);
  
  
  // Print out the array
  for ( int x : test_array)
  {
    std::cout <<x<< ",";
  }
  std::cout << "\n";
}

// Container library array
// More detail about this can be found at https://en.cppreference.com/w/cpp/container/array
void std_array()
{
  // Initialize an array
  std::array<int,3> test_array{10,20,30};

  // Get the length of an array
  int len = test_array.size();

  //print out the array
  for (int x : test_array)
  {
    std::cout << x << ',';
  }
  std::cout<< "\n";
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
