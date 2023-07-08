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
    i = 0;
    while (i <= n-1) {
        j = 1;
        while (j<=(2*i + 1)) {
            temp *= x;
            j++;
        }
        sum += temp;
        temp = 1;
        i++;
    }
    printf("%d", sum);
}