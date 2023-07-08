/*
    By Kichirou24
*/
#include <stdio.h>

int tinhtong(int x){
    int z, r;
    r = 0;
    z = 1;
    while (z <= x) {
        r+= z;
        z++;
    }
    return r;
} 

int main() {
    int n, i, temp; 
    double sum;
    scanf("%d", &n );
    sum = 1;
    temp = 1;
    i = 2;
    while (i <= n) {
        temp = tinhtong(i);
        sum+= 1.0/temp;
        i++;
    }
    printf("%.2f", sum);
}