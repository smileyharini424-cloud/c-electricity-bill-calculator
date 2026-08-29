#include <stdio.h>

int main() {
    int units;
    float bill = 0;

    printf("===== Electricity Bill Calculator =====\n");

    printf("Enter electricity units consumed: ");
    scanf("%d", &units);

    if (units <= 0) {
        printf("Invalid units entered.\n");
    }
    else if (units <= 100) {
        bill = units * 1.50;
    }
    else if (units <= 200) {
        bill = (100 * 1.50) +
               ((units - 100) * 2.50);
    }
    else if (units <= 500) {
        bill = (100 * 1.50) +
               (100 * 2.50) +
               ((units - 200) * 4.00);
    }
    else {
        bill = (100 * 1.50) +
               (100 * 2.50) +
               (300 * 4.00) +
               ((units - 500) * 6.00);
    }

    if (units > 0) {
        printf("\n===== Electricity Bill =====\n");
        printf("Units Consumed : %d\n", units);
        printf("Total Bill     : Rs. %.2f\n", bill);
    }

    return 0;
}
