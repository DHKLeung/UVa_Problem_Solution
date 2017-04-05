#include <iostream>
#include <string>
using namespace std;
/***************************************
Coded by Daniel H. Leung
Date : 2016-07-23 (YYYYMMDD)
***************************************/
int main(void) {
	int freq[127];
	string input;
	int flag = 0;
	while (getline(cin, input)) {
		if (flag == 1) {
			cout << endl;
		}
		for (int i = 0; i < 127; i++) {
			freq[i] = 0;
		}
		for (int i = 0; i < input.length(); i++) {
			freq[(int)input[i]]++;
		}
		for (int i = 1; i < 1001; i++) {
			for (int j = 126; j >= 0; j--) {
				if (freq[j] == i) {
					cout << j << ' ' << freq[j] << endl;
				}
			}
		}
		flag = 1;
	}
	return 0;
}