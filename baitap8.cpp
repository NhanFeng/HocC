
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool cmp(double a, double b)
{
    double ss = 0.000001;
    return fabs(a-b) < ss;
}

int main(){
    double a, b, c;
	printf("Nhap canh a: "); scanf("%lf", &a);
    printf("Nhap canh b: "); scanf("%lf", &b);
    printf("Nhap canh c: "); scanf("%lf", &c);

	if(a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a) {
        double cv = a + b + c;
        double ncv = cv / 2;
        double s = sqrt(ncv * (ncv - a) * (ncv - b) * (ncv - c));

		if(cmp(a, b) && cmp(a, c)) {
			printf("Tam giac deu\n");
		}
		else if(cmp(a, b) || cmp(b, c) || cmp(a, c)) {
			if(cmp(a * a, b * b + c * c) || cmp(b * b, a * a + c * c) || cmp(c * c, a * a + b * b)) {
				printf("tam giac vuong can\n");
			}
			else {
				printf("tam giac can\n");
			}
		}
		else if(cmp(a * a, b * b + c * c) || cmp(b * b, a * a + c * c) || cmp(c * c, a * a + b * b)) {
			printf("tam giac vuong\n");
		}
		else {
			printf("tam giac thuong\n");
		}

        printf("Dien tich: %lf\nChu vi: %lf\n", s, cv);
	} 
    else {
        printf("Khong phai tam giac!\n");
    }
    return 0;
}

