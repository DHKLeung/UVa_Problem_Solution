#include <iostream>
using namespace std;
/***************************************
Coded by Daniel H. Leung
Date : 2016-07-27 (YYYYMMDD)
***************************************/
int main(void) {
	int n, total, counter, average;
	float percentage;
	scanf("%d\n", &n);
	for (int i = 1; i <= n; i++) {
		average = 0;
		counter = 0;
		scanf("%d", &total);
		int *student = new int[total];
		for (int j = 0; j < total; j++) {
			scanf("%d", &*(student + j));
			average += *(student + j);
		}
		average /= total;
		for (int j = 0; j < total; j++) {
			if (*(student + j) > average) {
				counter++;
			}
		}
		percentage = (((float)counter) / ((float)total)) * 100;
		printf("%.3f%c\n", percentage, '%');
		delete[] student;
	}
	return 0;
}