#include <stdio.h>

// GROUP 5
// CONTRIBUTORS: INGEL, SUMAGAYSAY, AND SUNGA

int main()
{
    int input = 7;
    int i, j, s;

    printf("\n1. Line Input %d:\n\n", input); // CONTRIBUTOR: INGEL
    for(i = 0; i < input; i++)
    {
        printf("*");
    }
    printf("\n\n");

    printf("\n2. StrippedLine Input %d:\n\n", input); // CONTRIBUTOR: SUMAGAYSAY
    for (i = 0; i < input; i++) {
        if (i % 2 == 0) {
            printf("*");
        } else {
            printf("_");
        }
    }
    printf("\n\n");

    printf("\n4. Parallelogram Input %d:\n\n", input); // CONTRIBUTOR: INGEL
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

    printf("5. Triangle Input %d:\n\n", input); // CONTRIBUTOR: SUMAGAYSAY
    for (int i = 0; i <= input; i++) {
        for (int star = 0; star < input - i; star++) {
            printf("*");
        }
        for (int under = 0; under < i; under++) {
            printf("_");
        }
        printf("\n");
    }
    printf("\n\n");

    printf("\n7. IsoscelesTriangle Input %d:\n\n", input); // CONTRIBUTOR: INGEL
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

    printf("\n8. ReverseIsocelesTriangle Input %d:\n\n", input); // CONTRIBUTOR: SUMAGAYSAY
    for (int i = 0; i <= input / 2; i++) {
        for (int lunder = 0; lunder < i; lunder++) {
            printf("_");
        }
        for (int stars = 0; stars < input - 2*i; stars++) {
            printf("*");
        }
        for (int runder = 0; runder < i; runder++) {
            printf("_");
        }
        printf("\n");
    }
    printf("\n\n");

    printf("\n10. Diamond Input %d:\n\n", input); // CONTRIBUTOR: INGEL
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

    printf("\n11. Zero Input %d:\n\n", input); // CONTRIBUTOR: SUMAGAYSAY
      for (int row = 0; row < input; row++) {       
        for (int col = 0; col < input; col++) {  
            if (row == 0 || row == input-1 || col == 0 || col == input-1) {
                printf("*");   
            } else {
                printf("_");   
            }
        }
        printf("\n");
    }
    printf("\n\n");
    

    printf("\n13. ArrowDown Input %d:\n\n", input); // CONTRIBUTOR: INGEL
    for(i = 0; i < input / 2; i++)
    {
        for(s = 0; s < (input - 3) / 2; s++)
        {
            printf("_");
        }
        printf("***");
        for(s = 0; s < (input - 3) / 2; s++)
        {
            printf("_");
        }
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
    printf("\n\n");

    printf("\n14. X Input %d:\n\n", input); // CONTRIBUTOR: SUMAGAYSAY
    for (int i = 0; i < input; i++) {       
        for (int zstar = 0; zstar < input; zstar++) {   
            if (zstar == i || zstar == input - i - 1) {
                printf("*");   
            } else {
                printf("_");   
            }
        }
        printf("\n");
    }
    printf("\n");

    return 0;

}