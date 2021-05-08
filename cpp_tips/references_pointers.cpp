#include <iostream>
#include <array>
using namespace std;
/*
	normal parameter.
*/
void f0(double x)
{
	// change made to x will NOT affect the variable outside the function.
	x = 3.6;
	std::cout << "Inside f0, x: " << x << "\n";
}

/*
Passing arguments by reference, which is essentially an alias for the arguments you pass.
Passing by const reference (const double& ref) is preferred when you are not going to change the arguments inside the function.
And when you are going to change them, use non-const reference.

Passing by pointer Vs Passing by Reference in C++:

1. Passing by pointer and Passing by Reference both affect the variable outside the function.
2. A pointer is a variable that holds a memory address.
   A reference has the same memory address as the item it references.
3. Pointer can be assigned NULL directly.
   Reference cannot.
   Pointers are mostly used when you need to be able to pass NULL to your parameters.
   Since references can’t be NULL, they are safer to use.
4. Pointers can iterate over an array, we can use ++ to go to the next item that a pointer is pointing to.
5. A pointer can be re-assigned.
   Reference cannot, and must be assigned at initialization only.
6. A pointer to a class/struct uses ‘->'(arrow operator) to access it’s members.
   Reference uses a ‘.'(dot operator)
7. A pointer needs to be dereferenced with * to access the memory location it points to.
   A reference can be used directly.
*/
void f1(double &x)
{
	// Passing by reference, thus change made to x will affect the variable outside the function.
	x = 3.6;
	std::cout << "Inside f1, val x: " << x << "\n";
}

/*
f2 passes the address (using & operator) of the parameters.
*/
void f2(double *x)
{
	*x = 3.6;
	std::cout << "Inside f2, val x: " << *x << "\n";
}

// const reference of function paramenter is prefered
// if you are not gonna change the parameter inside the function.
void test_array(std::array<int, 6> &n)
{
	n[0] = 99;
}

int main()
{
	double a, b;
	a = 2;
	std::cout << "origally, a = " << a << "\n\n";

	f0(a);
	std::cout << "After f0, a = " << a << "\n\n";

	f1(a);
	std::cout << "After f1, a = " << a << "\n\n";

	f2(&a);
	std::cout << "After f2, a = " << a << "\n\n";

	array<int, 6> n = {1, 1, 2, 3, 5, 8};

	test_array(n);
	std::cout << n[0] << "\n";

	return 0;
}
