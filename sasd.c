#include <stdio.h>

// GROUP 5
// NUMBER IN ACTIVITY 1, 4, 7, 10, AND 13

int main()
{
    int input = 7;
    int i, j;   

    printf("\nDrawLine Input %d:\n\n", input);
    for (int i = 0; i < input; i++) printf("*");
    printf("\n");

    printf("\nDrawParallelogram Input %d:\n\n", input);
    for (int i = 0; i < input; i++) {
        for(int j = 0; j < input - 1 - i; j++) printf("_");
        for(int j = 0; j < input; j++) printf("*");
        for (int j = 0; j < i; j++) printf("_");
        printf("\n");
    }

    printf("\n\n");

    printf("\nDrawIsoscelesTriangle Input %d:\n\n", input);
    for (int i = 1; i <= input; i += 2) {
        for (int s = 0; s < (input - i) / 2; s++) printf("_");
        for (int j = 0; j < i; j++) printf("*");
        for (int s = 0; s < (input - i) / 2; s++) printf("_");
        printf("\n");
    }

    printf("\n\n");

    printf("\nDrawDiamond Input %d:\n\n", input);
    for (int i = 1; i <= input; i += 2) {
        for (int s = 0; s < (input - i) / 2; s++) printf("_");
        for (int j = 0; j < i; j++) printf("*");
        for (int s = 0; s < (input - i) / 2; s++) printf("_");
        printf("\n");
    }
    for (int i = input - 2; i >= 1; i -= 2) {
        for (int s = 0; s < (input - i) / 2; s++) printf("_");
        for (int j = 0; j < i; j++) printf("*");
        for (int s = 0; s < (input - i) / 2; s++) printf("_");
        printf("\n");
    }

    printf("\n\n");

    printf("\nDrawArrowDown Input %d:\n\n", input);
    for (int i = 0; i < input / 2; i++) {
        for (int s = 0; s < (input - 3) / 2; s++) printf("_");
        printf("***");
        for (int s = 0; s < (input - 3) / 2; s++) printf("_");
        printf("\n");
    }
    for (int i = input; i >= 1; i -= 2) {
        for (int s = 0; s < (input - i) / 2; s++) printf("_");
        for (int j = 0; j < i; j++) printf("*");
        for (int s = 0; s < (input - i) / 2; s++) printf("_");
        printf("\n");
    }

    printf("\n");

    return 0;

}