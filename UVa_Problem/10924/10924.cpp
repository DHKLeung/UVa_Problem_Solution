#include <iostream>
#include <string>
using namespace std;
/***************************************
Coded by Daniel H. Leung
Date : 2016-08-27 (YYYYMMDD)
***************************************/
int main(void) {
	string input = "";
	int num = 0;
	bool flag = true;
	while (getline(cin, input)) {
		for (int i = 0; i < input.length(); i++) {
			if (input[i] <= 122 && input[i] >= 97) {
				num += input[i] - 96;
			}
			else if (input[i] <= 90 && input[i] >= 65) {
				num += input[i] - 38;
			}
		}
		for (int i = 2; i < num; i++) {
			if (num % i == 0) {
				flag = false;
				break;
			}
		}
		if (flag == false) {
			printf("It is not a prime word.\n");
		}
		else {
			printf("It is a prime word.\n");
		}
		num = 0;
		flag = true;
	}
	return 0;
}