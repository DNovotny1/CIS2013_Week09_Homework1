#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void encryp(){

}

void decryp() {

}


int main() {
	char keepGoing = 'y';
	bool ingo = false;
	string fileName = "null";
	char input = '0';
	ifstream in_cypher;

	while (keepGoing == 'y') {
		cout << "What file would you like to open?\n";
		getline(cin, fileName);
		in_cypher.open(fileName);
		if (in_cypher.fail()) {
			cout << "File did not open, Please check spelling and try again.\n\n";
		}
		else {
			do {
				cout << "Would you like to encrypt(1) or decrypt(2)? \n";
				cin >> input;
				if (input == '1') {
					encryp();
				}
				else if (input == '2') {
					decryp();
				}
				else {
					ingo = true;
					cout << "Please type 1 or 2. \n";
				}
			} while (ingo);
		}
	}
	return 0;
}
