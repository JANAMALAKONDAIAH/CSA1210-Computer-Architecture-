#include <stdio.h>

int main()
{
    int A, B;
    int i, carry;
    int sum[4];
    int a[4], b[4];

    printf("Enter two 4-bit numbers: ");
    scanf("%d %d", &A, &B);

    /* Convert numbers into bits */
    for(i = 0; i < 4; i++)
    {
        a[i] = (A >> i) & 1;
        b[i] = (B >> i) & 1;
    }

    /* Ripple Carry Adder */
    carry = 0;

    for(i = 0; i < 4; i++)
    {
        sum[i] = a[i] ^ b[i] ^ carry;
        carry = (a[i] & b[i]) |
                (a[i] & carry) |
                (b[i] & carry);
    }

    printf("\nRipple Carry Adder Result = ");

    for(i = 3; i >= 0; i--)
        printf("%d", sum[i]);

    printf("\nFinal Carry = %d", carry);

    printf("\nCarry Propagation = 4 stages");

    /* Carry Look-Ahead concept */
    printf("\n\nCarry Look-Ahead Adder");
    printf("\nCarry is calculated using");
    printf("\nGenerate and Propagate signals.");
    printf("\nCarry propagation delay is reduced.");

    return 0;
}
