#include <iostream>
using namespace std;
/***************************************
Coded by Daniel H. Leung
Date : 2016-07-24 (YYYYMMDD)
***************************************/
int main(void) {
	int times;
	int a, b, k;
	while (cin >> times) {
		for (int i = 1; i <= times; i++) {
			cin >> a >> b;
			k = 0;
			cout << "Case " << i << ": ";
			if (a % 2 != 0) {
				for (int j = a; j <= b; j += 2) {
					k += j;
				}
			}
			else if (a % 2 == 0) {
				for (int j = a + 1; j <= b; j += 2) {
					k += j;
				}
			}
			cout << k << endl;
		}
	}
	return 0;
}