#include <stdio.h>

int main()
{
    int n;
    int normal, pipeline;

    printf("Enter number of instructions: ");
    scanf("%d", &n);

    normal = n * 5;
    pipeline = n + 4;

    printf("\nNon-Pipelined Cycles = %d", normal);
    printf("\nPipelined Cycles = %d", pipeline);

    return 0;
}
