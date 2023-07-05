#include <stdio.h>

int main() {
    int n, i;
    unsigned long factorial;
    scanf("%d", &n);
    factorial = 1;
    i = 2;
    while (i<= n) {
        factorial *= i;
        i++;
    }
    printf("%lx", factorial);
}