#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    char courses[200];
    char text[250];
    int freq[256] = {0};
    int i, max = 0;
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter your courses: ");
    fgets(courses, sizeof(courses), stdin);
    strcpy(text, name);
    strcat(text, courses);
    for (i = 0; text[i] != '\0'; i++) {
        if (text[i] != ' ' && text[i] != '\n') {
            freq[(unsigned char)text[i]]++;
        }
    }
	char maxc;
    for (i = 0; i < 256; i++) {
        if (freq[i] > max) {
            max = freq[i];
            maxc = i;
        }
    }
    printf("Maximum is %d of %c\n", max, maxc);
    return 0;
}
