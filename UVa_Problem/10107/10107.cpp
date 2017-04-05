#include <iostream>
using namespace std;
/***************************************
Coded by Daniel H. Leung
Date : 2016-07-24 (YYYYMMDD)
***************************************/
int main(void) {
	int input;
	int n[100000] = { 0 };
	int max = 0;
	while (cin >> input) {
		if (max == 0) {
			n[0] = input;
		}else {
			if (input > n[max - 1]) {
				n[max] = input;
			}
			else if (input < n[0]) {
				for (int j = max - 1; j >= 0; j--) {
					n[j + 1] = n[j];
				}
				n[0] = input;
			}
			else {
				for (int i = 0; i < max; i++) {
					if (input <= n[i]) {
						for (int j = max - 1; j >= i; j--) {
							n[j + 1] = n[j];
						}
						n[i] = input;
						break;
					}
				}
			}
		}
		max++;
		if (max % 2 != 0) {
			cout << n[max / 2] << endl;
		}
		else {
			cout << (n[max / 2] + n[(max / 2) - 1]) / 2 << endl;
		}
	}
	return 0;
}