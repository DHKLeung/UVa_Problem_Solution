#include <iostream>
#include <math.h>
using namespace std;
/***************************************
Coded by Daniel H. Leung
Date : 2016-08-29 (YYYYMMDD)
***************************************/
int main(void) {
	int num = 0, prenum = 0, sufnum = 0;
	char pre[3], suf[4];
	scanf("%d", &num);
	cin.ignore();
	for (int i = 0; i < num; i++) {
		scanf("%c%c%c-%c%c%c%c", &pre[0], &pre[1], &pre[2], &suf[0], &suf[1], &suf[2], &suf[3]);
		cin.ignore();
		for (int j = 0; j < 3; j++) {
			prenum += (pre[j] - 65) * pow(26, 2 - j);
		}
		for (int j = 0; j < 4; j++) {
			sufnum += (suf[j] - 48) * pow(10, 3 - j);
		}
		if (abs(prenum - sufnum) <= 100) {
			printf("nice\n");
		}
		else {
			printf("not nice\n");
		}
		prenum = 0;
		sufnum = 0;
	}
	return 0;
}