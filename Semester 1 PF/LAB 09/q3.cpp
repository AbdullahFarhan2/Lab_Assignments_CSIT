#include <stdio.h>

void volumeCal(int h, int a) {
    float volume;

    volume = (a * a * h) / 3.0;

    printf("Volume = %.2f", volume);
}

void getData(int h, int a) {
    printf("Enter height: ");
    scanf("%d", &h);

    printf("Enter side: ");
    scanf("%d", &a);

    volumeCal(h, a);
}

int main() {
    getData(0, 0);

    return 0;
}