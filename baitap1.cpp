#include <stdio.h>

int main() {
    long long x;
    printf("Nhap n: "); scanf("%lld", &x);

    printf("%lld^2 = %lld\n", x, x * x);
    printf("%lld^3 = %lld\n", x, x * x * x);
    printf("%lld^4 = %lld\n", x, x * x * x * x);
    return 0;
}
