#include <stdio.h>

int main() {
    int n;
    float sum,i;
    scanf("%d", &n);
    sum = 0;
    i = 1.00;
    while (i<= n) {
        sum += (i)/(i + 1);
        i++;
    }
    printf("%.2f", sum);
}