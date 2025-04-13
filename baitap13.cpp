
#include <stdio.h>
#include <math.h>

int main() {
    printf("So chan 1-20 la: \n");
    for(int i = 1; i <= 20; i++) {
        if(i % 2 == 0) {
            printf("%d\t", i);
        }
    }
    
    return 0;
}

