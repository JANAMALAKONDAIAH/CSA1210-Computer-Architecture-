#include <stdio.h>

int main()
{
    int n;

    printf("Enter number of transfers: ");
    scanf("%d", &n);

    printf("\nSingle Bus Cycles = %d", n);
    printf("\nMulti Bus Cycles = %d", (n + 1) / 2);

    return 0;
}
