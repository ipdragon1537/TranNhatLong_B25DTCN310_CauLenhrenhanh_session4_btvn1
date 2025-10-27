#include <stdio.h>

int main() {
    int number;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &number);
    if (number % 3 == 0 && number % 5 == 0) {
        printf("So vua nhap chia het cho ca 3 va 5.\n");
    } else if (number % 3 == 0) {
        printf("So vua nhap chia het cho 3.\n");
    } else if (number % 5 == 0) {
        printf("So vua nhap chia het cho 5.\n");
    } else {
        printf("So vua nhap khong chia het cho 3 hoac 5.\n");
    }

    return 0;
}
