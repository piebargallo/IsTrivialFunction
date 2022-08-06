// CPP program to illustrate is_trivial function
#include <iostream>
#include <type_traits>
using namespace std;

class A {

};

class B {
	
	B() {}

};

class C : B {

};

class D {
	
	virtual void fn() {}

};

// Driver Code
int main() {
	
	std::cout << std::boolalpha;
	
	// Returns value in boolean type
	std::cout << "A: " << std::is_trivial<A>::value << endl;
	std::cout << "B: " << std::is_trivial<B>::value << endl;
	std::cout << "C: " << std::is_trivial<C>::value << endl;
	std::cout << "D: " << std::is_trivial<D>::value << endl;
	
	return 0;

} // End code
