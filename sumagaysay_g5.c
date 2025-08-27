#include <stdio.h>

// GROUP 5
// NUMBER IN ACTIVITY 2, 5, 8, 11, AND 14

int main()
{
    int inp;   
    printf("Enter A Number To Draw:\n");
    printf("=======================\n");
    scanf("%d", &inp);

    printf("Draw Stripped Line\n\n");

    for (int i = 0; i < inp; i++) {
        if (i % 2 == 0) {
            printf("*");
        } else {
            printf("_");
        }
    }

    printf("\n\n");
    printf("Draw Triangle\n\n");

    for (int i = 0; i <= inp; i++) {
        for (int star = 0; star < inp - i; star++) {
            printf("*");
        }
        for (int under = 0; under < i; under++) {
            printf("_");
        }
        printf("\n");
    }


printf("\nDraw ReverseIsoceles Triangle\n");

for (int i = 0; i <= inp / 2; i++) {
	for (int lunder = 0; lunder < i; lunder++) {
            printf("_");
	}
	for (int stars = 0; stars < inp - 2*i; stars++) {
            printf("*");
	}
	for (int runder = 0; runder < i; runder++) {
            printf("_");
	}
	printf("\n");
}

printf("\nDraw Zero\n");
  for (int row = 0; row < inp; row++) {       
        for (int col = 0; col < inp; col++) {  
            if (row == 0 || row == inp-1 || col == 0 || col == inp-1) {
                printf("*");   
            } else {
                printf("_");   
            }
        }
        printf("\n");
    }


printf("\nDraw X\n");
for (int i = 0; i < inp; i++) {       
        for (int zstar = 0; zstar < inp; zstar++) {   
            if (zstar == i || zstar == inp - i - 1) {
                printf("*");   
            } else {
                printf("_");   
            }
        }
        printf("\n");
    }


    return 0;
    
   
}