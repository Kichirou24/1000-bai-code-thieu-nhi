#include <stdio.h>

int main() {
    int n;
    float sum,i;
    scanf("%d", &n);
    sum = 0;
    i = 0.00;
    while (i<= n) {
        sum += (2*i+1)/(2*i + 2);
        i++;
    }
    printf("%.2f", sum);
}