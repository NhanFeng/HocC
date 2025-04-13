
#include <stdio.h>

long long gt(int n) {
    long long s = 1;
    for(int i = 1; i <= n; i++) 
        s *= i;
    
    return s;
}

int main() {
    int n;
    printf("Nhap n: "); scanf("%d", &n);

    double s = 0;
    for(int i = 1; i <= n; i++) 
        s += (1.0 / gt(i));
    
    printf("Tong 1/n! la: %lf", s);
    
    return 0;
}

