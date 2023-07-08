/*
    By Kichirou24
*/
#include <stdio.h>

double multi(int x, int y){
    int z, r;
    y *= 2;
    r = 1;
    z = 1;
    while (z <= y) {
        r *= x;
        z++;
    }
    return r;
} 

double fac(int x) {
    x *= 2;
    int z, r;
    r = 1;
    z = 1;
    while (z <= x) {
        r *= z;
        z++;
    }
    return r;
}

int main() {
    int n, x, i;
    double sum, tempt, tempm;
    scanf("%d%d", &x, &n );
    sum = 1;
    i = 1;
    while (i <= n) { 
        tempt = multi(x, i);
        tempm = fac(i);
        sum += tempt/tempm;
        i++;
    }
    printf("%.2f", sum);
}