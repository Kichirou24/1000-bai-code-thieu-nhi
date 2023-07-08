/*
    By Kichirou24
*/
#include <stdio.h>

int main() {
    int n, x, i, j;
    long temp, sum;
    scanf("%d%d", &x, &n);
    sum = 0;
    temp = 1;
    i = 1;
    while (i <= n) {
        j = 1;
        while (j<=i) {
            temp *= x * x;
            j++;
        }
        sum += temp;
        temp = 1;
        i++;
    }
    printf("%d", sum);
}