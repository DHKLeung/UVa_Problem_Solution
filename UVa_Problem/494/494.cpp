#include <iostream>
#include <string>
using namespace std;
/***************************************
Coded by Daniel H. Leung
Date : 2016-07-23 (YYYYMMDD)
***************************************/
int main(void) {
	string input;
	int counter;
	bool front, end;
	while (getline(cin, input)) {
		front = false;
		end = false;
		counter = 0;
		for (int i = 0; i < input.length(); i++) {
			if (((input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= 'a' && input[i] <= 'z'))   && ((i == 0) || !((input[i - 1] >= 'A' && input[i - 1] <= 'Z') || (input[i - 1] >= 'a' && input[i - 1] <= 'z')))) {
				front = true;
			}
			if (((input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= 'a' && input[i] <= 'z')) && ((i == 0) || !((input[i + 1] >= 'A' && input[i + 1] <= 'Z') || (input[i + 1] >= 'a' && input[i + 1] <= 'z')))) {
				end = true;
			}
			if (front && end) {
				counter++;
				front = false;
				end = false;
			}			
		}
		cout << counter << endl;
	}
	return 0;
}