#include <iostream>
#include <string>
#include <math.h>
using namespace std;
/***************************************
Coded by Daniel H. Leung
Date : 2016-07-28 (YYYYMMDD)
***************************************/
int main(void) {
	string input;
	int result;
	while (getline(cin, input)) {
		result = 0;
		for (int i = 1; i < 10; i++) {
			if (input[i] == 'o') {
				if (i < 6) {
					result += pow(2, (10 - 2 - i));
				}
				else {
					result += pow(2, (10 - 1 - i));
				}
			}
			else if (input[i] == '-') {
				break;
			}
			else {
				continue;
			}
		}
		!result || printf("%c", result);
	}
	system("pause");
	return 0;
}
