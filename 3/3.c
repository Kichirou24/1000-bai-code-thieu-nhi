#include <stdio.h>

int main() {
    int i, n;
    float sum;
    scanf("%d", &n);
    sum = 0;
    i = 1;
    while (i <= n) {
        sum = sum + 1.0/i;
        i++;
    }
    printf("%.2f", sum);
}