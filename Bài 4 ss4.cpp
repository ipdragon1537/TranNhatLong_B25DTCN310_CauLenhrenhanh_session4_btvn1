#include <stdio.h>

int main() {
    int month, year;
    printf("Nhap mot so nguyen dai dien cho thang (1-12): ");
    scanf("%d", &month);
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Thang %d co 31 ngay.\n", month);
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("Thang %d co 30 ngay.\n", month);
            break;
        case 2:
            printf("Thang %d co 28 hoac 29 ngay (tuy vao nam nhuan).\n", month);
            break;
        default:
            printf("Thang khong hop le.\n");
            break;
    }

    return 0;
}
