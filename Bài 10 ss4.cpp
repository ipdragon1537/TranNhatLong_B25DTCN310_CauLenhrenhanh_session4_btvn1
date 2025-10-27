#include <stdio.h>
int main() {
    int numbers[3];
    printf("Nhap 3 so nguyen: ");
    scanf("%d %d %d", &numbers[0], &numbers[1], &numbers[2]);
    int i, j, temp;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2 - i; j++) {
            if (numbers[j] > numbers[j + 1]) {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    printf("Thu tu tang dan: %d %d %d\n", numbers[0], numbers[1], numbers[2]);
    return 0;
}
