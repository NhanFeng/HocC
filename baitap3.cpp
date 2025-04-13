#include <stdio.h>

int main(){
	long long a, b,x,y,z;
	
	printf("nhap a ");scanf("%lld", &a);
	printf("nhap b ");scanf("%lld", &b);
	x = a+b;
    y = a-b;
	z = a*b;
	double w = (double) a / b;
	printf("%lld\n",x);
	printf("%lld\n",y);
	printf("%lld\n",z);
	printf("%.2lf\n",w );
	return 0;
	 
} 
