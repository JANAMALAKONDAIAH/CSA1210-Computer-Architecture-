#include <stdio.h>

int main()
{
    int a, b, result;

    printf("Enter two 8-bit signed integers: ");
    scanf("%d %d", &a, &b);

    result = a + b;

    printf("Result = %d\n", result);

    if (result > 127 || result < -128)
        printf("Overflow detected!\n");
    else
        printf("No overflow.\n");

    return 0;
}
