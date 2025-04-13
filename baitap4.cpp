#include <stdio.h>
#define PI 3.14

int main(){
	float R, V , S;

	printf("%.2f\n Nhap ban kinh R ");
	scanf("%f", &R);
	S = 4* PI * R * R ;
	V = (4.0/3)* PI * R * R * R;
	printf("Dien tich la: %.2f\n", S );
	printf("The tich la: %.2f", V );
	return 0;
	 
} 
