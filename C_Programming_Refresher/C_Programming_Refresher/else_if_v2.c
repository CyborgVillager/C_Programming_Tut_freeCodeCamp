#include <stdio.h>

int main() {
    float temperature;

    printf("Enter the current temperature (in Celsius): ");
    scanf_s("%f", &temperature);

    if (temperature <= -273.15) {
        printf("Below Absolute Zero! (Invalid Temperature)\n");
    }
    else if (temperature > -273.15 && temperature <= 0) {
        printf("Freezing\n");
    }
    else if (temperature > 0 && temperature <= 10) {
        printf("Cold\n");
    }
    else if (temperature > 10 && temperature <= 20) {
        printf("Moderate\n");
    }
    else if (temperature > 20 && temperature <= 30) {
        printf("Warm\n");
    }
    else if (temperature > 30 && temperature < 100) {
        printf("Hot\n");
    }
    else if (temperature >= 100) {
        printf("Boiling Point or Above\n");
    }

    return 0;
}
