
#include <stdio.h>

int main() {
    int a[100];
    int n;

    printf("Nhap n: "); scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Nhap so thu %d: ", i + 1); 
        scanf("%d", &a[i]);
        if(a[i] < 0)
            a[i] = 0;
    }
    
    printf("Mang sau khi da thay the gia tri am la: ");
    for(int i = 0; i < n; i++) 
        printf("%d ", a[i]); 

    return 0;
}

