#include <iostream>
#include <string>
using namespace std;
/***************************************
Coded by Daniel H. Leung
Date : 2016-07-26 (YYYYMMDD)
***************************************/
int main(void) {
	int n, wrong;
	string input, one = "one";
	scanf("%d\n", &n);
	for (int i = 1; i <= n; i++) {
		wrong = 0;
		getline(cin, input);
		if (input.length() == 3) {
			for (int j = 0; j < 3; j++) {
				if (input[j] != one[j]) {
					wrong++;
				}
			}
			if (wrong <= 1) {
				printf("1\n");
			}
			else {
				printf("2\n");
			}
		}
		else {
			printf("3\n");
		}
	}
	return 0;
}