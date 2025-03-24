#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    printf("Nhap a: "); scanf("%f", &a);
    printf("Nhap b: "); scanf("%f", &b);
    printf("Nhap c: "); scanf("%f", &c);

    if(a == 0) {
        printf("Vui long nhap pt bac 2\n");
    }
    else {
        float delta = b * b - 4 * a * c;
        if(delta < 0) {
            printf("Vo nghiem!");
        }
        else if(delta > 0) {
            float x1 = (-b + sqrt(delta)) / (2 * a);
            float x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Nghiem x1 = %2.f\nNghiem x2 = %2.f\n", x1, x2);
        }
        else {
            float x = (-b) / (2 * a);
            printf("Nghiem kep: %f\n", x);
        }
    }
    return 0;
}
