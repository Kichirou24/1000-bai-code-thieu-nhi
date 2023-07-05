/*
    By Kichirou24
*/
#include <stdio.h>

double T(double x,long n) {
    double r = 1;
    while (n) {
        if (n % 2 == 1) {
            r *= x;
        }
        x *= x;
        n /= 2;
    }
    return r;
}

int main() {
    double x, result;
    long n;
    scanf("%d%d", &x, &n);
    result = T(x,n);
    printf("%d", result);
}