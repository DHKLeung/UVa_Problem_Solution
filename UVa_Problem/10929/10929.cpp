#include <iostream>
#include <string>
using namespace std;
/***************************************
Coded by Daniel H. Leung
Date : 2016-07-28 (YYYYMMDD)
***************************************/
int main(void) {
	string input;
	int result;
	while (getline(cin, input) && input != "0") {
		result = 0;
		for (int i = input.length() - 1; i >= 0; i -= 2) {
			result += input[i] - 48;
		}
		for (int i = input.length() - 2; i >= 0; i -= 2) {
			result -= input[i] - 48;
		}
		if (result % 11 == 0) {
			printf("%s is a multiple of 11.\n", input.c_str());
		}
		else {
			printf("%s is not a multiple of 11.\n", input.c_str());
		}
	}
	return 0;
}