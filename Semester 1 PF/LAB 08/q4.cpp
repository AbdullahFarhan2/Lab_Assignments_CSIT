// the code had errors. so output is not shown, Corrected code is below:

#include <stdio.h>

int main(void)
{
    char a[12] = "hello world";
    int i;

    for(i = 0; i <= 9; i++)
    {
        a[i] = a[i + 1];
        printf("%d \t %s\n", i, a);
    }

    printf("\n");

    return 0;
}
