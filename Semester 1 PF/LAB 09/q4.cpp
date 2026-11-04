#include <stdio.h>

float roundNumber(float num) {
    num = (int)(num * 100 + 0.5) / 100.0;
    return num;
}

int main() {
    float num;

    printf("Enter a positive number: ");
    scanf("%f", &num);

    printf("Rounded number: %.2f", roundNumber(num));

    return 0;
}