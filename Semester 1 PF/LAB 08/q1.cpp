#include <stdio.h>
#include <string.h>

int main(){
	char fname[20], lname[20], fullName[40];
	printf("Enter first name: ");
	scanf("%s", fname);
	printf("Enter last name: ");
	scanf("%s", lname);
	strcpy(fullName, fname);
	strcat(fullName, " ");
    strcat(fullName, lname);
	printf("your full name is %s", fullName);
	return 0;
}

