#include <iostream>
using namespace std;

int main() {
	string userName;
	int userAge;

	// This is a statement that will ask the user for their name
	cout << "Please enter your name: " << endl;
	cin >> userName;

	//This will then display the user's name and ask for their age
	cout << userName << " please enter your current age: " << endl;
	cin >> userAge;


	//This final statement will thank the user for testing my program
	cout << "Hello, " << userName << " thank you for testing my program." << endl;
	cout << "Goodbye!" << endl;

	return 0;

}