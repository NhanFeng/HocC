
#include <stdio.h>

int main() {
    long long s = 0;
    for(int i = 0; i < 10; i++) {
        int n;
        printf("Nhap so %d: ", n); scanf("%d", &n);
        s += n;
    }
    printf("Tong tu 1 den n la: %lld", s);

    return 0;
}

