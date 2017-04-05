#include <iostream>
#include <string>
using namespace std;
/***************************************
Coded by Daniel H. Leung
Date : 2016-07-25 (YYYYMMDD)
***************************************/
int main(void) {
	string code = "`1234567890-=QWERTYUIOP[]ASDFGHJKL;'ZXCVBNM,./";
	string input;
	while (getline(cin, input)) {
		for (int i = 0; i < input.length(); i++) {
			for (int j = 0; j < code.length(); j++) {
				if (input[i] == ' ') {
					cout << ' ';
					break;
				}
				else if (input[i] == code[j]) {
					cout << code[j - 1];
					break;
				}
			}
		}
		cout << endl;
	}
	return 0;
}