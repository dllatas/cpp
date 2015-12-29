#include <iostream>
using namespace std;

// const double pi = 3.14159;
// const char newline = '\n';
// These 2 constants can be defined as Pre processor definitions
#define PI 3.14159
#define NEWLINE '\n'
// These are replace trought the whole code before the program is compiled


int main() {
	double r = 10.0;
	double circle;

	// circle = 2 * pi * r;
	circle = 2 * PI * r;
	cout << circle;
	// cout << newline;
	cout << NEWLINE;
}
