#include <iostream>
#include <string>
using namespace std;
/***************************************
Coded by Daniel H. Leung
Date : 2016-07-24 (YYYYMMDD)
***************************************/
int main(void) {
	string input;
	bool front = false;
	while (getline(cin, input)) {
		for (int i = 0; i < input.length(); i++) {
			if (input[i] == '"' && !front) {
				cout  << "``";
				front = true;
			}
			else if (input[i] == '"' && front) {
				cout << "''";
				front = false;
			}
			else {
				cout << input[i];
			}
		}
		cout << endl;
	}
	return 0;
}