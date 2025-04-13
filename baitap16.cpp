
#include <stdio.h>

int main() {
    int a, b;
    printf("Nhap a: "); scanf("%d", &a);
    printf("Nhap b: "); scanf("%d", &b);


    int gcd = (a < b) ? a : b;

    if(gcd != 0) {
      while(gcd > 0)
      {
         if(a % gcd == 0 && b % gcd == 0)
           break;
        gcd--;
      }
    }
    else {
      gcd = (a < b) ? b : a;
    }

    long long lcm = (a * b) / gcd;
    printf("Uoc chung lon nhat: %d\nBoi chung nho nhat: %ld\n", gcd, lcm);
    
    return 0;
}

