#include <iostream>
using namespace std;

#define NEWLINE '\n'

void printVariables(int a, int b) {
	cout << "a: " << a << NEWLINE;
	cout << "b: " << b << NEWLINE;
	cout << "-------" << NEWLINE;
	/* cout << a;
	cout << NEWLINE;
	cout << "b: ";
	cout << b;
	cout << NEWLINE; */
}


int main() {
	int a, b;
	// Assignment operator
	a = 5;
	b = 10;
	printVariables(a, b);
	// Compound assignment
	a = b;
	a += 2;
	printVariables(a, b);
	// Increment and decrement 
	++a;
	--b;
	printVariables(a, b);
	b = ++a;
	printVariables(a, b);
	--a;
	b = a++;
	printVariables(a, b);
	// Relational and comparison operators
	// Short-circuit evaluation (theory)
	// Comma operator
	// Conditional ternary operator
 	int c;
 	c = ( a < b ) ? a : b;
	cout << "c: ";
	cout << c << NEWLINE;
}

