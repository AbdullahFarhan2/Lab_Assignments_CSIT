#include <stdio.h>

void instructions() {
    printf("Enter the initial cost of the house.\n");
    printf("Enter the estimated annual fuel cost.\n");
    printf("Enter the annual tax rate (in percentage).\n\n");
}

float totalCost(float initialCost, float fuelCost, float taxRate) {
    float total;

    total = initialCost + (fuelCost * 5) + (initialCost * taxRate / 100 * 5);

    return total;
}

int main() {
    float initialCost, fuelCost, taxRate;

    instructions();

    printf("Enter initial cost: ");
    scanf("%f", &initialCost);

    printf("Enter annual fuel cost: ");
    scanf("%f", &fuelCost);

    printf("Enter annual tax rate: ");
    scanf("%f", &taxRate);

    printf("\nTotal cost after 5 years = %.2f",
           totalCost(initialCost, fuelCost, taxRate));

    return 0;
}