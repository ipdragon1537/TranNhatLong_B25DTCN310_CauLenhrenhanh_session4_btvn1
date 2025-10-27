#include <stdio.h>

int main() {
    int number;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &number);
    if (number % 2 == 0) {
        printf("So vua nhap la so chan.\n");
    } else {
        printf("So vua nhap la so le.\n");
    }

    return 0;
}
