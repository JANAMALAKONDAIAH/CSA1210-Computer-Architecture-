#include <stdio.h>

int main()
{
    int n;

    printf("Enter number of instructions: ");
    scanf("%d", &n);

    printf("\nSingle Issue Cycles = %d", n);
    printf("\nSuperscalar Cycles = %d", (n + 1) / 2);
    printf("\nSMT: Two threads execute simultaneously");

    return 0;
}
