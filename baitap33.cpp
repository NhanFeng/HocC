
#include <stdio.h>

int main() {
    int a[] = {3, 5, 7, 9, 10};
    int b[] = {2, 5, 8, 9, 28, 39, 40};
    int c[100];

    int len_a = sizeof(a) / sizeof(a[0]), len_b = sizeof(b) / sizeof(b[0]);
    int i = 0, j = 0, res = 0;
    while(i < len_a) {
        if(j < len_b && a[i] > b[j])
            c[res++] = b[j++];
        else
            c[res++] = a[i++];
    }
    while(j < len_b)
        c[res++] = b[j++];


    printf("Mang sau khi da ket hop la: ");
    for(int i = 0; i < res; i++)
        printf("%d ", c[i]);

    return 0;
}

