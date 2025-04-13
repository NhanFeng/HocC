#include <stdio.h>
#include <math.h>

int main() {
    // cramer
    float a, b, c, d, e, f;
    printf("Nhap a: "); scanf("%f", &a);
    printf("Nhap b: "); scanf("%f", &b);
    printf("Nhap c: "); scanf("%f", &c);
    printf("Nhap d: "); scanf("%f", &d);
    printf("Nhap e: "); scanf("%f", &e);
    printf("Nhap f: "); scanf("%f", &f);

    float D = a * e - d * b, D1 = c * e - f * b, D2 = a * f - d * c;
    if(D == 0) {
        if(D1 == 0 && D2 == 0) 
            printf("Vo so nghiem\n");
        else 
            printf("Vo nghiem\n");
    }
    else {
        printf("Nghiem x = %f\nNghiem y = %f\n", D1 / D, D2 / D);
    }
    return 0;
}
