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

int main()
{
    int value1 = 5, value2 = 7;

    printf("\nDrawLine Input 5:\n"); line(value1);
    printf("\n");
    printf("DrawLine Input 7:\n"); line(value2);

    return 0;
}