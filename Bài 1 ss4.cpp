#include <stdio.h>

int main() {
    int number;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &number);
    if (number > 0) {
        printf("So vua nhap la so duong.\n");
    } else if (number < 0) {
        printf("So vua nhap la so am.\n");
    } else {
        printf("So vua nhap la so khong.\n");
    }
    return 0;
}

