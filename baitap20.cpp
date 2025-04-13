
#include <stdio.h>

int main() {
    int n;
    printf("Nhap n: "); scanf("%d", &n);

    long long f1 = 1, f2 = 1, fn = 1;
    for(int i = 3; i <= n; i++) {
        fn = f1 + f2;
        f2 = f1;
        f1 = fn;
    }

    printf("fibonacci thu %d la: %ld", n, fn);
    return 0;
}

