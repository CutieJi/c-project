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

void diamond(int value)
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
    for(i = value - 2; i >= 1; i -= 2)
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

void arrowDown(int value)
{
    int i, j;
    int mid = value / 2;

    for(i = 0; i < value; i++)
    {
        int stars;

        if(i < mid)
        {
            stars = 3;
        }
        else if(i == mid)
        {
            stars = value;
        }
        else
        {
            stars = value - 2 * (i - mid);
        }

        int spaces = (value - stars) / 2;

        for(j = 0; j < spaces; j++)
        {
            printf("_");
        }
        for(j = 0; j < stars; j++)
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
    int value1 = 7;

    printf("\n");
    printf("DrawLine Input 5:\n"); line(value1);
   // printf("DrawLine Input 7:\n"); line(value2);

    printf("\n");

    printf("\nDrawParallelogram Input 5:\n"); parallelogram(value1);
  //  printf("DrawParallelogram Input 7:\n"); parallelogram(value2);

    printf("\n");

    printf("\nDrawIsocelesTriangle Input 5:\n"); isocelesTriangle(value1);
  //  printf("DrawIsocelesTriangle Input 7:\n"); isocelesTriangle(value2);

    printf("\n");

    printf("\nDrawDiamond Input 5:\n"); diamond(value1);
//    printf("DrawDiamond Input 7:\n"); diamond(value2);

    printf("\n");

    printf("DrawArrowDown Input 5:\n"); arrowDown(value1);
  //  printf("DrawArrowDown Input 7:\n"); arrowDown(value2);

    return 0;
}