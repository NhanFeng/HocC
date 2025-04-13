
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Nhap so n: "); scanf("%d", &n);

    int fl = 1;
    if(n < 2)
      fl = 0;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            fl = 0;
            break;
        }
    }

    if(fl)
        printf("%d la so nguyen to", n);
    else
        printf("%d khong phai so nguyen to", n);
    
    return 0;
}

