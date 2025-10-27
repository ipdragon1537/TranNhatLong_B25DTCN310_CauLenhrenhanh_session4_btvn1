#include <stdio.h>

int main() {
    int day, month, year;
    printf("Nhap ngay: ");
    scanf("%d", &day);
    printf("Nhap thang: ");
    scanf("%d", &month);
    printf("Nhap nam: ");
    scanf("%d", &year);
    int isLeapYear = 0;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        isLeapYear = 1;
    }
    int isValid = 1; // Gi? s? là h?p l?
    if (month < 1 || month > 12) {
        isValid = 0;
    }
    else if (day < 1) {
        isValid = 0;
    }
    else {
        switch (month) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                if (day > 31) isValid = 0;
                break;
            case 4: case 6: case 9: case 11:
                if (day > 30) isValid = 0;
                break;
            case 2:
                if (isLeapYear) {
                    if (day > 29) isValid = 0;
                } else {
                    if (day > 28) isValid = 0;
                }
                break;
        }
    }
    if (isValid) {
        printf("Ngay thang nam hop le\n");
    } else {
        printf("Ngay thang nam khong hop le\n");
    }
    return 0;
}
