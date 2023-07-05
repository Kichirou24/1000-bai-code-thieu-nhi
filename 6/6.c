/*
    By Kichirou24
*/
#include <stdio.h>

int main() {
    int i, n;
    float sum;
    scanf("%d", &n);
    sum = 0;
    i = 1;
    while (i<= 2* n) {
        sum += 1.0/(i*(i + 1));
        i++;
    }
    printf("%.2f", sum);
}