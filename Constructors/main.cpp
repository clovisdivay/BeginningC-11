#include <iostream>


class Truc
{
public:
	Truc() : Truc(0, 0) // Default Constructor delegates the construction to a parametrised constructor (C++11)
	{}
	Truc(const Truc &copyCar) // Copy constructor: Needs a reference or it will call itself (variable pass by copy) !
	{
		// Mandatory if there is pointers in the class attributes, or else the default copy constructor will copy the address of the pointer, not the value 
		// (this is called a shallow copy, the proper way is called a deep copy)
	}
	Truc(int a, int b) // Parametrised constructor
	{
		A = a;
		B = b;
	}

	int A, B;
};

class Object
{
public:
	Object() = default; // Default Constructor generated (C++11). 
	Object(const Object &copyObject) = delete;// Copy constructor is "deleted", so it is inaccessible

	int A;
};


int main()
{
	Truc test;
	std::cout << test.A << " " << test.B << std::endl;

	Object a;
	// Object b(a); // Compilation error !

	return 0;
}