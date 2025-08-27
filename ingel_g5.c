#include <stdio.h>

// GROUP 5
// NUMBER IN ACTIVITY 1, 4, 7, 10, AND 13

int main()
{
    int input = 7;
    int i, j, s;

    printf("\nLine Input %d:\n\n", input);
    for(i = 0; i < input; i++)
    {
        printf("*");
    }
    printf("\n");

    printf("\nParallelogram Input %d:\n\n", input);
    for(i = 0; i < input; i++)
    {
        for(j = 0; j < input - 1 - i; j++)
        {
            printf("_");
        }
        for(j = 0; j < input; j++)
        {
            printf("*");
        }
        for(j = 0; j < i; j++)
        {
            printf("_");
        }
        printf("\n");
    }
    printf("\n\n");

    printf("\nIsoscelesTriangle Input %d:\n\n", input);
    for(i = 1; i <= input; i += 2)
    {
        for(s = 0; s < (input - i) / 2; s++)
        {
            printf("_");
        }
        for(j = 0; j < i; j++)
        {
            printf("*");
        }
        for(s = 0; s < (input - i) / 2; s++)
        {
            printf("_");
        }
        printf("\n");
    }
    printf("\n\n");

    printf("\nDiamond Input %d:\n\n", input);
    for(i = 1; i <= input; i += 2)
    {
        for(s = 0; s < (input - i) / 2; s++)
        {
            printf("_");
        }
        for(j = 0; j < i; j++)
        {
            printf("*");
        }
        for(s = 0; s < (input - i) / 2; s++)
        {
            printf("_");
        }
        printf("\n");
    }
    for(i = input - 2; i >= 1; i -= 2)
    {
        for(s = 0; s < (input - i) / 2; s++)
        {
            printf("_");
        }
        for(j = 0; j < i; j++)
        {
            printf("*");
        }
        for(s = 0; s < (input - i) / 2; s++)
        {
            printf("_");
        }
        printf("\n");
    }
    printf("\n\n");

    printf("\nArrowDown Input %d:\n\n", input);
    for(i = 0; i < input / 2; i++) {
        for(s = 0; s < (input - 3) / 2; s++) printf("_");
        printf("***");
        for(s = 0; s < (input - 3) / 2; s++) printf("_");
        printf("\n");
    }
    for(i = input; i >= 1; i -= 2)
    {
        for(s = 0; s < (input - i) / 2; s++)
        {
            printf("_");
        }
        for(j = 0; j < i; j++)
        {
            printf("*");
        }
        for(s = 0; s < (input - i) / 2; s++)
        {
            printf("_");
        }
        printf("\n");
    }
    printf("\n");

    return 0;

}