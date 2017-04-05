#include <stdio.h>
/***************************************
Coded by Daniel H. Leung
Date : 2016-10-31 (YYYYMMDD)
***************************************/
int main(void) {
    int a, b, ans1, ans2, temp;
    while(scanf("%d %d", &a, &b) && (a != -1 || b != -1)) {
        if (a > b) {
            temp = a;
            a = b;
            b = temp;
        }
        ans1 = b - a;
        ans2 = 100 + a - b;
        printf("%d\n", (ans1 > ans2)?ans2:ans1);
    }
    return 0;
}