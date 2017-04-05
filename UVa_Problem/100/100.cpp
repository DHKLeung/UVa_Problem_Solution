#include <iostream>
using namespace std;
/***************************************
Coded by Daniel H. Leung
Date : 2016-04-08 (YYYYMMDD)
***************************************/
int cal(int x) {
	int counter = 1;
	while (!!(x - 1)) {
		!!(x % 2) ? (x = 3 * x + 1) : (x = x >> 1);
		counter += 1;
	}
	return counter;
}
int main(void) {
	int max, i, j, temp, flag;
	while (flag = 0, max = 0, cin >> i >> j) {
		!(j < i) || (temp = i, i = j, j = temp, flag = 1);
		for (int k = i; k <= j; !(cal(k) > max) || (max = cal(k)), k++);
		cout << (flag ? j : i) << ' ' << (flag ? i : j) << ' ' << max << endl;
	}
	return 0;
}