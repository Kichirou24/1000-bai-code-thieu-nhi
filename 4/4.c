#include <stdio.h>

int main() {
    int i, n;
    float sum;
    scanf("%d", &n);
    sum = 0;
    i = 1;
    while (i<= 2* n) {
        sum += 1.0/(2*i);
        i++;
    }
    printf("%.2f", sum);
}