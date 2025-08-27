#include <stdio.h>

void line(int value)
{
    int i;

    for(i = 0; i < value; i++)
    {
        printf("*");
    }
    printf("\n");
}

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

void isocelesTriangle(int value)
{
    int i, j;

    for(i = 1; i <= value; i += 2)
    {
        int spaces = (value - i) / 2;

        for(j = 0; j < spaces; j++)
        {
            printf("_");
        }
        for(j = 0; j < i; j++)
        {
            printf("*");
        }
        for(j = 0; j < spaces; j++)
        {
            printf("_");
        }
        printf("\n");
    }
}

int main()
{
    int value1 = 5, value2 = 7;

    printf("\n");
    printf("DrawLine Input 5:\n"); line(value1);
    printf("DrawLine Input 7:\n"); line(value2);

    printf("\n");

    printf("\nDrawParallelogram Input 5:\n"); parallelogram(value1);
    printf("DrawParallelogram Input 7:\n"); parallelogram(value2);

    printf("\n");

    printf("\nDrawIsocelesTriangle Input 5:\n"); isocelesTriangle(value1);
    printf("DrawIsocelesTriangle Input 7:\n"); isocelesTriangle(value2);

    return 0;
}