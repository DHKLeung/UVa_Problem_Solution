#include <iostream>
#include <string>
#include <sstream>
using namespace std;
/***************************************
Coded by Daniel H. Leung
Date : 2016-07-26 (YYYYMMDD)
***************************************/
int main(void) {
	string input, temp;
	int n, times, flag = 0;;
	stringstream ss;
	scanf("%d\n", &n);
	for (int i = 1; i <= n; i++) {
		getline(cin, input);
		printf("Case %d: ", i);
		for (int j = 0; j < input.length(); j++) {
			if (input[j] >= 'A' && input[j] <= 'Z') {
				flag = j;
				for (int k = j + 1; k < input.length(); k++) {
					if (input[k] >= '0' && input[k] <= '9') {
						temp += input[k];
					}
					else {
						break;
					}
				}
				ss << temp;
				ss >> dec >> times;
				for (int q = 0; q < times; q++) {
					printf("%c", input[flag]);
				}
				temp.clear();
				ss.clear();
				flag = 0;
			}
		}
		printf("\n");
	}
	return 0;
}