#include <stdio.h>
int main(int argc, char **argv) {
    int num, a, b;
    scanf("%d", &num);
    while (num > 0) {
        scanf("%d %d", &a, &b);
        if (a > b) {
            printf(">\n");
        }else if (a < b) {
            printf("<\n");
        }else {
            printf("=\n");
        }
        num--;
    }
    return 0;
}
