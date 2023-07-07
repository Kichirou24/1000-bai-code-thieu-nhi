/*
    By Kichirou24
*/
#include <stdio.h>

long fac(int x) {
    long r;
    int t;
    r = 1;
    t = 1;
    while (t <= x) {
        r *= t;
        t++;
    }
    return r;
}

int main() {
    int n, i;
    long temp, sum;
    scanf("%d", &n);
    sum = 0;
    temp = 0;
    i = 1;
    while (i <= n) {
        temp = fac(i);
        sum += temp;
        i++;
    }
    printf("%d", sum);
}