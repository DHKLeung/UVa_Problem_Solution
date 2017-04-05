#include <stdio.h>
#include <stdlib.h>
/***************************************
Coded by Daniel H. Leung
Date : 2016-11-03 (YYYYMMDD)
***************************************/
int main(void) {
    long long int temp = 0, result = 0, i = 0, j = 0, amount = 0, counter = 0;
    while (scanf("%lld", &amount) != EOF) {
        counter++;
        long long int *arr = NULL;
        arr = (long long int*)malloc(sizeof(long long int) * amount);
        for (i = 0; i < amount; i++) {
            scanf("%lld", arr + i);
        }
        for (i = 0; i < amount; i++) {
            temp = *(arr + i);
            !(temp > result)||(result = temp);
            for (j = i + 1; j < amount; j++) {
                temp *= *(arr + j);
                !(temp > result)||(result = temp);
            }
        }
        printf("Case #%d: The maximum product is %lld.\n\n", counter, (result > 0)?result:0);
        result = 0;
        free(arr);
    }
    return 0;
}
