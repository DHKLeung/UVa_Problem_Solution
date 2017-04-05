#include <stdio.h>
int func(int num) {
    int accu = 0;
    if (num < 10) {
        return num;
    }else {
        while (num > 0) {
            accu += num % 10;
            num = num / 10;
        }
        return func(accu);
    }
}
int main(int argc, char **argv) {
    int input;
    while (scanf("%d", &input) != EOF && input != 0) {
        printf("%d\n", func(input));
    }
    return 0;
}
