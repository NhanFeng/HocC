#include <stdio.h>

#define MAX 100

int matrix[MAX][MAX];
int n;

// Hàm 1: Tính ma tr?n xoáy
void tinhMaTranXoay() {
    int value = 1;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    while (value <= n * n) {
        for (int i = left; i <= right; i++)
            matrix[top][i] = value++;
        top++;

        for (int i = top; i <= bottom; i++)
            matrix[i][right] = value++;
        right--;

        for (int i = right; i >= left; i--)
            matrix[bottom][i] = value++;
        bottom--;

        for (int i = bottom; i >= top; i--)
            matrix[i][left] = value++;
        left++;
    }

    printf(">> Da tinh xong ma tran xoay!\n");
}

// Hàm 2: In ma tr?n
void hienMaTran() {
    printf(">> Ma tran xoay %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
}

// Hàm main: Menu l?a ch?n
int main() {
    int choice;

    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    do {
        printf("\n====== MENU ======\n");
        printf("1. Tinh ma tran xoay\n");
        printf("2. Hien ma tran xoay\n");
        printf("3. Ket thuc\n");
        printf("Nhap lua chon (1-3): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                tinhMaTranXoay();
                break;
            case 2:
                hienMaTran();
                break;
            case 3:
                printf(">> Tam biet!\n");
                break;
            default:
                printf(">> Lua chon khong hop le!\n");
        }
    } while (choice != 3);

    return 0;
}

