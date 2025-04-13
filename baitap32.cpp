
#include <stdio.h>

int main() {
    int a[100];
    int n;

    printf("Nhap n: "); scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Nhap so thu %d: ", i + 1); 
        scanf("%d", &a[i]);
    }
    
    int tmp;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] > a[j]) {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    printf("Mang sau khi sap xep tang dan la: ");
    for(int i = 0; i < n; i++) 
        printf("%d ", a[i]); 

    return 0;
}

