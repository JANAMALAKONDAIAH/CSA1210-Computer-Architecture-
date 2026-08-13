#include <stdio.h>

int main()
{
    int n, normal, hazard, resolved;

    printf("Enter number of instructions: ");
    scanf("%d", &n);

    normal = n + 4;
    hazard = normal + 5;
    resolved = normal;

    printf("\nNormal Pipeline = %d cycles", normal);
    printf("\nWith Hazards = %d cycles", hazard);
    printf("\nAfter Resolution = %d cycles", resolved);

    return 0;
}
