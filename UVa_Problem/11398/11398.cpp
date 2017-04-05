#include <iostream>
#include <string>
#include <math.h>
using namespace std;
/***************************************
Coded by Daniel H. Leung
Date : 2016-08-26 (YYYYMMDD)
***************************************/
int main(void) {
	char flag = '-';
	int result = 0;
	string input = "", bin = "", temp = "";
	while (getline(cin, input) && input != "~") {
		for (int i = 0; i < input.length(); i++) {
			if (input[i] == '0') {
				temp += input[i];
			}
			else if (input[i] == ' ') {
				if (temp.length() == 1) {
					flag = '1';
				}
				else if (temp.length() == 2) {
					flag = '0';
				}
				else {
					for (int j = 1; j <= temp.length() - 2; j++) {
						bin += flag;
					}
				}
				temp.clear();
			}
			else if (input[i] == '#') {
				for (int k = 0; k < bin.length(); k++) {
					if (bin[k] == '1') {
						result += pow(2, bin.length() - 1 - k);
					}
				}
				printf("%d\n", result);
				input.clear();
				bin.clear();
				result = 0;
			}
		}
	}
	return 0;
}