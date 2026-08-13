#include <stdio.h>

int main()
{
    float a, b, single_result;
    double da, db, double_result;

    printf("Enter a large number: ");
    scanf("%f", &a);

    printf("Enter a small number: ");
    scanf("%f", &b);

    single_result = a + b;

    da = a;
    db = b;

    double_result = da + db;

    printf("\nSingle Precision Result = %.10f",
           single_result);

    printf("\nDouble Precision Result = %.10lf",
           double_result);

    printf("\n\nFloating Point Operations:");
    printf("\n1. Exponent Alignment");
    printf("\n2. Mantissa Addition");
    printf("\n3. Normalization");
    printf("\n4. Rounding");

    return 0;
}
