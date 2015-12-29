#include <iostream>
#include <sstream>
#include <string>
using namespace std;

const int maxLife = 120;

int main() {
	string answer;
	// Standard output
	// 1st style
	cout << "First line." << endl;
	cout << "Second line." << endl;
	// 2nd style
	cout << "First sentence.\n";
	cout << "Second sentence.\nThird sentence.\n";
	// Chaining insertion
	cout << "This is " << "something " << "difficult to " << "mantain." << endl;
	cout << "This is easier to mantain.\n";
	// Standard input
	cout << "Yo! What's up?" << endl;
	// The following code will only get a single word
	// cin >> answer;
	// However this code, will get the whole line
	getline(cin, answer);
	if (answer == "Fine") {
		cout << "Cool, bro !! " << endl;
	}
	else {
		cout << "Damn ... shut down !!" << endl;
	}
	/*==========================================
	1: Get values as strings. 
	2: Parse them as integers or floats
	3: Perform operations with them
	==========================================*/
	string response;
	double age;
	float average;
	cout << "So, hommez, how old are ya???" << endl;
	getline(cin, response);
	stringstream(response) >> age;
	// average = age / maxLife; 
	average = (age/maxLife) * 100;
	cout << "You have already live " << average << "% of your life" << endl;
	return 0;
}