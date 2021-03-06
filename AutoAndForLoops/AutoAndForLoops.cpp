// AutoAndForLoops.cpp : définit le point d'entrée pour l'application console.
//

#include <iostream>


int main()
{
	int i = 2;
	auto j = i; // j is of type int

	const int a = 2;
	auto b = a; // b is not const, only int
	const auto c = a; // c is of const int type
	auto &d = a; // d is a const int reference to a;
	auto e = &a; // e is a const int* pointer
	auto f = &i; // f is a pointer to i, (int* type)

	int arr[] = { 1,2,3,4 };

	for (int x : arr)                    // Java style for each loop
		std::cout << x << "\n";

	for (auto x : arr)                   // Using auto: type independant for each loop
		std::cout << x << "\n";
    return 0;
}

