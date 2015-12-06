#include <iostream>
using namespace std;

int main() {
	/*int a, b, result;
	a = 5;
	b = 2;*/
	// Variable initialization
	// c-like initialization
	int a = 5;
	// constructor initialization
	int b (2);
	//  uniform initialization
	int c {3};
	int result;
	// Process 
	a = a + 1;
	result = a - b;
	cout << result + c;
	cout << "=====";
	return 0;
}