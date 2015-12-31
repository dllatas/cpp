#include <iostream>
using namespace std;

int main() {
	bool x (true);
	bool y (true);
	int n = 10;
	int z = 1;
	string name {"Daniel"};
	/* ----------------
	SELECTION STATEMENTS
	------------------- */
	// IF - ELSE
	if (x)
		cout << "x is true" << endl;
	x = false;
	if (x) {
		cout << "x is true" << endl;
	}
	else {
		cout << "x is false" << endl;
	}
	// SWITCH
	switch(x) {
		case true: 
			cout << "x is true" << endl;
			break;
		/*case 2:
			cout << "z is not one" << endl;
			break;*/
		default:
			cout << "x is false" << endl;
			break;
	}
	cout << "always" << endl;
	/* ----------------
	ITERATION STATEMENTS
	------------------- */
	// WHILE
	while (y) {
		cout << n << endl;
		if (n == 5){
			y = false;
		}
		n--;
	}
	// DO WHILE
	do {
		cout << "print only once !!!" << endl;
	}
	while (x);
	// FOR - LOOP
	int m = 0;
	for(; m < 20; m++) {
		cout << m + m << endl;
	}
	cout << "========" << endl;
	for(;m < 20;m++){
		cout << m << endl;	
	}
	// RANGE BASED LOOP
	for (char c : name) {
		cout << c << " ";
	}
	cout << endl;
	/* ----------------
	JUMP STATEMENTS
	------------------- */
	// break
	for (int a=10; a>0; a--){
		cout << a << endl;
		break;
	}
	// continue
	for (int a=10; a>0; a--){
		cout << a << endl;
		continue;
		cout << "i am super cool !!!";
	}
	// goto is evil !!!!
	return 0;
}