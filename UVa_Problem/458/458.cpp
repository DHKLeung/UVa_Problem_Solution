#include <iostream>
#include <string>
using namespace std;
/***************************************
Coded by Daniel H. Leung
Date : 2016-07-23 (YYYYMMDD)
***************************************/
int main(void) {
	int k = 7;
	string input;
	while (getline(cin, input)) {
		for (int i = 0; i < input.length(); i++) {
			input[i] -= 7;
			cout << input[i];
		}
		cout << endl;
	}
	return 0;
}