#include <iostream>
using namespace std;
/***************************************
Coded by Daniel H. Leung
Date : 2016-07-25 (YYYYMMDD)
***************************************/
int main(void) {
	int num_stack, average, counter;
	int trial = 0;
	while (scanf("%d", &num_stack) && num_stack != 0) {
		trial++;
		average = 0;
		counter = 0;
		int *stack = new int[num_stack];
		for (int i = 0; i < num_stack; i++) {
			scanf("%d", &*(stack + i));
			average += *(stack + i);
		}
		average /= num_stack;
		for (int i = 0; i < num_stack; i++) {
			if (*(stack + i) > average) {
				counter += (*(stack + i) - average);
			}
		}
		printf("Set #%d\n", trial);
		printf("The minimum number of moves is %d.\n\n", counter);
		delete[] stack;
	}
	return 0;
}
