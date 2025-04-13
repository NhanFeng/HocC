
#include <stdio.h>
#include <math.h>

int main() {
   float n;
   printf("Nhap diem: "); scanf("%f", &n);

   if(n < 5)
       printf("Yeu\n");
   else if(n >= 5 && n < 7)
       printf("TB\n");
   else if(n >= 7 && n < 8)
       printf("Kha\n");
   else if(n >= 8 && n < 9)
       printf("Gioi\n");
   else
       printf("Xuat xac\n");

   return 0;
}

