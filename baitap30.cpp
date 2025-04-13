
#include <stdio.h>

int main() {
    int a[100];
    int n, x, res = 0;

    printf("Nhap n: "); scanf("%d", &n);
    printf("Nhap x: "); scanf("%d", &x);

    for(int i = 0; i < n; i++) {
        printf("Nhap so thu %d: ", i + 1); 
        scanf("%d", &a[i]);
        if(a[i] == x)
            res++;
    }
    
    printf("phan tu %d xuat hien %d lan trong mang\n", x, res);
    return 0;
}

