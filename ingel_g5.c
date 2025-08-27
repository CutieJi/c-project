#include <stdio.h>

// GROUP 5
// NUMBER IN ACTIVITY 1, 4, 7, 10, AND 13

int value = 11;

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
    
    printf("\n");
    printf("DrawLine inputut %d:\n", value); line(value);
   // printf("DrawLine inputut 7:\n"); line(value2);

    printf("\n");

    printf("\nDrawParallelogram inputut %d:\n", value); parallelogram(value);
  //  printf("DrawParallelogram inputut 7:\n"); parallelogram(value2);

    printf("\n");

    printf("\nDrawIsocelesTriangle inputut %d:\n", value); isocelesTriangle(value);
  //  printf("DrawIsocelesTriangle inputut 7:\n"); isocelesTriangle(value2);

    printf("\n");

    printf("\nDrawDiamond inputut %d:\n", value); diamond(value);
//    printf("DrawDiamond inputut 7:\n"); diamond(value2);

    printf("\n");

    printf("DrawArrowDown inputut %d:\n", value); arrowDown(value);
  //  printf("DrawArrowDown inputut 7:\n"); arrowDown(value2);

    return 0;
}