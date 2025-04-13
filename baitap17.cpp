
#include <stdio.h>

int main() {
    int n;
    printf("Nhap n: "); scanf("%d", &n);

    double s = 0;
    for(int i = 1; i <= n; i++) 
        s += (1.0 / i);
    
    printf("Tong 1-1/n la: %lf", s);
    
    return 0;
}

