/*
    By Kichirou24
*/
#include <stdio.h>

void lietKeUocSo(int n) {
    int i, t;
    t = 0;
    for (int i=1; i*i<=n; i++) {
        if (n % i ==0) {
            printf("%d ", i);
            t ++;
        }
        if (i != n / i) {
            printf("%d ", n / i);
            t ++;
        }
    }

    if (t==0) {
        printf("%d là số nguyên tố\n", n);
    } else {
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    lietKeUocSo(n);
    return 0;
}