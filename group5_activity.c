#include <stdio.h>

// GROUP 5
// CONTRIBUTORS: INGEL, SUMAGAYSAY, AND SUNGA

int main()
{
    int input = 7;
    int i, j, s, u;

    printf("\n1. Line Input %d:\n\n", input); // CONTRIBUTOR: INGEL
    for(i = 0; i < input; i++)
    {
        printf("*");
    }
    printf("\n\n");

    printf("\n2. StrippedLine Input %d:\n\n", input); // CONTRIBUTOR: SUMAGAYSAY
    for(i = 0; i < input; i++)
    {
        if(i % 2 == 0)
        {
            printf("*");
        }
        else
        {
            printf("_");
        }
    }
    printf("\n\n");

    printf("\n3. Square Input %d:\n\n", input); // CONTRIBUTOR: SUNGA
    for(i = 0; i < input; i++)
    {
        for(j = 0; j < input; j++)
        {
            printf("*");
        }
        printf("\n");
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
    for(i = 0; i <= input; i++)
    {
        for(s = 0; s < input - i; s++)
        {
            printf("*");
        }
        for(u = 0; u < i; u++)
        {
            printf("_");
        }
        printf("\n");
    }
    printf("\n\n");

    printf("\n6. ReverseTriangle Input %d:\n\n", input); // CONTRIBUTOR: SUNGA
    for(i = 0; i < input; i++)
    {
        for(s = 0; s <= i; s++)
        {
            printf("*");
        }
        for(u = 0; u < input - i - 1; u++)
        {
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
    for(i = 0; i <= input / 2; i++)
    {
        for(int lunder = 0; lunder < i; lunder++)
        {
            printf("_");
        }
        for(s = 0; s < input - 2*i; s++)
        {
            printf("*");
        }
        for(int runder = 0; runder < i; runder++)
        {
            printf("_");
        }
        printf("\n");
    }
    printf("\n\n");

    printf("\n9. Hourglass Input %d:\n\n", input); // CONTRIBUTOR: SUNGA
    for(i = 0; i <= input / 2; i++)
    {
        for(u = 0; u < i; u++)
        {
            printf("_");
        }
        for(s = 0; s < input - 2 * i; s++)
        {
            printf("*");
        }
        for(u = 0; u < i; u++)
        {
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
      for(i = 0; i < input; i++)
      {       
        for(j = 0; j < input; j++)
        {  
            if(i == 0 || i == input-1 || j == 0 || j == input-1)
            {
                printf("*");   
            }
            else
            {
                printf("_");   
            }
        }
        printf("\n");
    }
    printf("\n\n");

    printf("\n12. ArrowUp Input %d:\n\n", input); // CONTRIBUTOR: SUNGA
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
    for(i = 0; i < input; i++)
    {       
        for(s = 0; s < input; s++)
        {   
            if(s == i || s == input - i - 1)
            {
                printf("*");   
            }
            else
            {
                printf("_");   
            }
        }
        printf("\n");
    }
    printf("\n\n");

    printf("\n15. BowTie Input %d:\n\n", input); // CONTRIBUTOR: SUNGA
    for(i = 0; i < input; i++)
    {
        int row = (i <= input/2) ? i : input - i - 1;
        for(j = 0; j <= row; j++)
        {
            printf("*");
        }
        for(j = 0; j < input - 2*(row+1) + 1; j++)
        {
            printf("_");
        }
        for(j = 0; j <= row && input - 2*(row+1) + 1 >= 0; j++)
        {
            printf("*");
        }
    printf("\n");
}
    printf("\n\n");
    
    return 0;

}