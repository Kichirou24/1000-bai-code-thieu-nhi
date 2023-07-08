/*
    By Kichirou24
*/
#include <stdio.h>

/* int multi(int x, int y) {
    int z, r;
    r = 1;
    z = 1;
    while (z<=y) {
        r *= x;
        z++;
    }
    return r;
} */

double tinhtong(int x){
    int z, r;
    r = 0;
    z = 1;
    while (z <= x) {
        r += z;
        z++;
    }
    return r;
} 

int main() {
    int n, x, i, j;
    double sum, tempt, tempm;
    scanf("%d%d", &x, &n );
    sum = 0;
    i = 1;
    while (i <= n) {
        j = 1;
        tempt = 1;
        while (j <= i) {
            tempt *= x;
            j++;
        }
        tempm = tinhtong(i);
        sum += tempt/tempm;
        i++;
    }
    printf("%.2f", sum);
}