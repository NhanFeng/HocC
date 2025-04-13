
#include <stdio.h>

int main() {
    int n;
    printf("Nhap n: "); scanf("%d", &n);

    long long s = 1;
    for(int i = 1; i <= n; i++) 
        s *= i;
    
    printf("Giai thua la: %ld", s);
    
    return 0;
}

