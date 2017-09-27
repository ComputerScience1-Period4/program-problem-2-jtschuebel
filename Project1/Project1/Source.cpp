/*
JT Schuebel 9/25/2017 4th
Take in Data
Display Data, Accept User Response, Display Changed Data
*/


#include <iostream>
#include <conio.h>
using namespace std;

void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';

}
void main(){
	int number;
	char last_initial;
	double cents;
	double myPocketChange = 0.1;
	bool you_gots_mo_cents;

	cout << "What is your favorite number (no decimals): ";
	cin >> number;
	cout << "What is the first letter of your first name : ";
	cin >> last_initial;
	cout << "How much cents do you have in your pocket?";
	cin >> cents;
	you_gots_mo_cents = cents > myPocketChange;

	cout << "Wow your " << number << " I thought it was... 9." << endl;
	cout << "Your last letter was " << last_initial << " mine is T. \n";
	cout << "Wow you have $" << cents << " in your pocket? " << '\n';
	if (you_gots_mo_cents) {
		cout << "How much cents do you have in your pocket? : ";
	}


	pause();

}