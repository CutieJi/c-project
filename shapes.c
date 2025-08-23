#include <stdio.h>

int main() {
    int i, j;

    int rightTri[5][5];
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(j >= 4 - i)
                rightTri[i][j] = 1;
            else
                rightTri[i][j] = 0;
        }
    }
    printf("\nRight Triangle:\n");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(rightTri[i][j] == 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    
    int invtRight[5][5];
    for(i = 0; i < 5; i++){
        for(j = 0; j <= i; j++){
            invtRight[i][j] = 1;
        }
    }
    printf("\nInverted Right Triangle:\n");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(invtRight[i][j] == 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    
    int square[5][5];
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            square[i][j] = 1;
        }
    }
    printf("\nSolid Square:\n");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(square[i][j] == 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}