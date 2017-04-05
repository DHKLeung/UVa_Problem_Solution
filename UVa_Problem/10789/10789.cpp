#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
/***************************************
Coded by Daniel H. Leung
Date : 2016-09-04 (YYYYMMDD)
***************************************/
int main(void) {
	int n, counter;
	bool empty;
	string input, output;
	scanf("%d", &n);
	cin.ignore();
	for (int i = 0; i < n; i++) {
		empty = true;
		getline(cin, input);
		bool *flag = new bool[input.length()]();
		printf("Case %d: ", i + 1);
		for (int k = 0; k < input.length(); k++) {
			if (*(flag + k) == false) {
				counter = 0;
				for (int q = k; q < input.length(); q++) {
					if (input[q] == input[k]) {
						*(flag + q) = true;
						counter += 1;
					}
				}
				bool primeflag = true;
				if (counter == 1) {
					primeflag = false;
				}
				else {
					for (int p = 2; p < counter; p++) {
						if (counter % p == 0) {
							primeflag = false;
							break;
						}
					}
				}
				if (primeflag == true) {
					output += input[k];
					empty = false;
				}
			}
		}
		if (empty == true) {
			printf("empty");
		}
		else {
			for (int w = 0; w < output.length() - 1; w++) {
				for (int r = 0; r < output.length() - w - 1; r++) {
					if (output[r] > output[r + 1]) {
						swap(output[r], output[r + 1]);
					}
				}
			}
			cout << output;
		}
		printf("\n");
		output.clear();
	}
	return 0;
}