#include <iostream>
using namespace std;
/***************************************
Coded by Daniel H. Leung
Date : 2016-07-24 (YYYYMMDD)
***************************************/
int main(void) {
	int n, a, f;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d%d", &a, &f);
		for (int j = 1; j <= f; j++) {
			for (int k = 1; k <= a; k++) {
				for (int q = 1; q <= k; q++) {
					printf("%d", k);
				}
				printf("\n");
			}
			for (int k = a - 1; k >= 1; k--) {
				for (int q = k; q >= 1; q--) {
					printf("%d", k);
				}
				printf("\n");
			}
			((j == f) && (i == n)) || printf("\n");		
		}
	}
	return 0;
}