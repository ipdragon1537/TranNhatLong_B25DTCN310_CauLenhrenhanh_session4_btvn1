#include <stdio.h>
int main() {
    int old_reading, new_reading;
    int kwh_used;
    long long total_bill = 0;
    printf("Nhap chi so cong to dien dau thang (kWh): ");
    scanf("%d", &old_reading);
    printf("Nhap chi so cong to dien cuoi thang (kWh): ");
    scanf("%d", &new_reading);
    kwh_used = new_reading - old_reading;
    if (kwh_used < 0) {
        printf("Chi so cuoi thang khong the nho hon chi so dau thang. Vui long nhap lai.\n");
        return 1;
    }
    printf("\nTong so dien da tieu thu trong thang: %d kWh\n", kwh_used);
    int remaining_kwh = kwh_used;
    if (remaining_kwh > 200) {
        total_bill += (long long)(remaining_kwh - 200) * 30000;
        remaining_kwh = 200;
    }
    if (remaining_kwh > 150) {
        total_bill += (long long)(remaining_kwh - 150) * 25000;
        remaining_kwh = 150;
    }
    if (remaining_kwh > 100) {
        total_bill += (long long)(remaining_kwh - 100) * 20000;
        remaining_kwh = 100;
    }
    if (remaining_kwh > 50) {
        total_bill += (long long)(remaining_kwh - 50) * 15000;
        remaining_kwh = 50;
    }
    if (remaining_kwh > 0) {
        total_bill += (long long)remaining_kwh * 10000;
    }
    printf("Tong tien dien trong thang la: %lld VND\n", total_bill);

    return 0;
}
