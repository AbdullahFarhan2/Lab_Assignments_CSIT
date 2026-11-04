#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void CountFrequency(int array1[], int size) {
    int i, j, count, found;
    for(i = 0; i < size; i++) {
        found = 0;
        for(j = 0; j < i; j++) {
            if(array1[i] == array1[j]) {
                found = 1;
                break;
            }
        }
        if(found == 1)
            continue;
        count = 0;
        for(j = 0; j < size; j++) {
            if(array1[i] == array1[j])
                count++;
        }
        printf("%d occurred %d times\n", array1[i], count);
    }
}
int main() {
    int size, i;
    printf("Enter array size: ");
    scanf("%d", &size);
    int array1[size];
    srand(time(NULL));
    printf("Array: ");
    for(i = 0; i < size; i++) {
        array1[i] = rand() % 11;
        printf("%d ", array1[i]);
	}
    printf("\n\n");
    CountFrequency(array1, size);
    return 0;
}