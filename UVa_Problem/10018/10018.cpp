#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
/***************************************
Coded by Daniel H. Leung
Date : 2016-07-24 (YYYYMMDD)
***************************************/
int main(void) {
	string temp1, temp2;
	unsigned int n, num, result, counter;
	cin >> n;
	for (unsigned int i = 1; i <= n; i++) {
		cin >> temp1;
		counter = 0;
		while (temp1 != temp2) {
			num = stoi(temp1);
			reverse(temp1.begin(), temp1.end());
			result = num + stoi(temp1);
			temp1 = to_string(result);
			temp2 = temp1;
			reverse(temp2.begin(), temp2.end());
			counter++;
		}
		cout << counter << ' ' << temp1 << endl;
	}
	return 0;
}