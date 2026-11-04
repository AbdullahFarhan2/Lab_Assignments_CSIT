#include <stdio.h>

void recruitment() {
    int marks, experience;

    printf("Enter test marks: ");
    scanf("%d", &marks);

    if(marks >= 70) {
        printf("Enter years of experience: ");
        scanf("%d", &experience);

        if(experience >= 2)
            printf("Selected: Associate Developer");
        else
            printf("Not selected");
    }
    else if(marks >= 60) {
        printf("Enter years of experience: ");
        scanf("%d", &experience);

        if(experience >= 1)
            printf("Selected: Assistant Developer");
        else
            printf("Not selected");
    }
    else if(marks >= 50) {
        printf("Selected: Trainee Engineer");
    }
    else {
        printf("Not selected");
    }
}

int main() {
    recruitment();

    return 0;
}