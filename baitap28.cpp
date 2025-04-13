
#include <stdio.h>

int main() {
    int a[100];
    int n, res = 0;
    long long s1 = 0, s2 = 0;

    printf("Nhap n: "); scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        printf("Nhap so thu %d: ", i + 1); 
        scanf("%d", &a[i]);
        s1 += a[i];
        if(a[i] >= 0) {
            res++;
            s2 += a[i];
        }
    }

    printf("Tong tat ca cac so trong mang: %lld\n", s1);
    printf("Tong cac so nguyen duong: %lld\n", s2);
    printf("Tong cac so nguyen am: %lld\n", s1 - s2);
    printf("Trung binh cong cac so: %f\n", (s1 * 1.0) / n);
    printf("Tong cac so nguyen duong: %f\n", (s2 * 1.0) / res);
    printf("Tong tat ca cac so trong mang: %f\n", ((s1 - s2) * 1.0) / (n - res));
    return 0;
}

