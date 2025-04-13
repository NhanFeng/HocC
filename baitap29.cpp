
#include <stdio.h>

#define INT_MIN -2147483648
#define INT_MAX 2147483647

int main() {
    int a[100];
    int n, mn = INT_MAX, mx = INT_MIN, p1, p2;

    printf("Nhap n: "); scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        printf("Nhap so thu %d: ", i + 1); 
        scanf("%d", &a[i]);
        if(mx < a[i]) {
            mx = a[i];
            p1 = i;
        }
        if(mn > a[i]) {
            mn = a[i];
            p2 = i;
        }
    }
    
    printf("So lon nhat trong mang la: %d\nVi tri: %d\n", mx, p1);
    printf("So nho nhat trong mang la: %d\nVi tri: %d\n", mn, p2);

    return 0;
}

