#include <stdio.h>

void parallelogram(int value)
{
    int i, j;

    for(i = 0; i < value; i++) 
    {
        for(j = 0; j < value - 1 - i; j++)
        {
            printf("_");
        }
        for(j = 0; j < value; j++)
        {
            printf("*");
        }
        for(j = 0; j < i; j++)
        {
            printf("_");
        }
        printf("\n");
    }
}

int main()
{
    int value1 = 5, value2 = 7;

    printf("\nDrawParallelogram Input 5:\n"); parallelogram(value1);
    printf("\n");
    printf("DrawParallelogram Input 7:\n"); parallelogram(value2);

    return 0;
}