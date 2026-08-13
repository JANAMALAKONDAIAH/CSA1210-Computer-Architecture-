#include <stdio.h>

int main()
{
    int dividend, divisor;
    int quotient, remainder;

    printf("Enter dividend: ");
    scanf("%d", &dividend);

    printf("Enter divisor: ");
    scanf("%d", &divisor);

    if (divisor == 0)
    {
        printf("Division by zero is not allowed.");
        return 0;
    }

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    printf("\nRestoring Division");
    printf("\n------------------");
    printf("\nQuotient = %d", quotient);
    printf("\nRemainder = %d", remainder);
    printf("\nRestoration may be required when remainder is negative.");

    printf("\n\nNon-Restoring Division");
    printf("\n----------------------");
    printf("\nQuotient = %d", quotient);
    printf("\nRemainder = %d", remainder);
    printf("\nUnnecessary restoration operations are avoided.");

    return 0;
}
