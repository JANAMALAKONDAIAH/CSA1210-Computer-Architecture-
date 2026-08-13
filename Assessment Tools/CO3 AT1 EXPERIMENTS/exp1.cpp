#include <stdio.h>

int main()
{
    int R1, R2, R3;

    printf("Enter value of R1: ");
    scanf("%d", &R1);

    printf("Enter value of R2: ");
    scanf("%d", &R2);

    printf("\nRegister Transfer:");
    printf("\nR1 -> ALU");
    printf("\nR2 -> ALU");

    R3 = R1 + R2;
    printf("\n\nAddition: R3 = %d", R3);

    R3 = R1 - R2;
    printf("\nSubtraction: R3 = %d", R3);

    R3 = R1 & R2;
    printf("\nAND: R3 = %d", R3);

    R3 = R1 | R2;
    printf("\nOR: R3 = %d", R3);

    return 0;
}
