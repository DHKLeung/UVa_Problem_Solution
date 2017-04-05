#include <iostream>
#include <string>
using namespace std;
/***************************************
Coded by Daniel H. Leung
Date : 2016-07-27 (YYYYMMDD)
***************************************/
int main(void) {
	string input[4], temp;
	int n, result, bridge;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		result = 0;
		temp.clear(); 
		for (int j = 0; j < 4; j++) {
			cin >> input[j];
			for (int a = 0; a <= 2; a += 2) {
				bridge = input[j][a] - 48;
				bridge *= 2;
				temp = to_string(bridge);
				for (int q = 0; q < temp.length(); q++) {
					result += temp[q] - 48;
				}
			}
			for (int a = 1; a <= 3; a += 2) {
				result += input[j][a] - 48;
			}
		}
		temp = to_string(result);
		if (temp[temp.length() - 1] == '0') {
			printf("Valid\n");
		}
		else {
			printf("Invalid\n");
		}
	}
	return 0;
}