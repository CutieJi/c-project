#include <stdio.h>

void main()
{
    int firstNum, secondNum, operation, continueOperation;
    float result;

    printf("\nENTER FIRST NUM: ");
    scanf("%d", &firstNum);

    printf("ENTER SECOND NUM: ");
    scanf("%d", &secondNum);
    
    printf("\n\n");

    printf("[1] ADDITION\n");
    printf("[2] SUBTRACTION\n");
    printf("[3] DIVISION\n");
    printf("[4] MULTIPLICATION\n");
    printf("SELECT OPERATION: ");
    scanf("%d", &operation);
    
    printf("\n\n");
    
    switch(operation)
    {
        case 1:
            result = firstNum + secondNum;
            printf("Result: %d + %d = %.2f\n", firstNum, secondNum, result);
            break;
        case 2:
            result = firstNum - secondNum;
            printf("Result: %d - %d = %.2f\n", firstNum, secondNum, result);
            break;
        case 3:
            if(secondNum == 0)
            {
                printf("Error: Not allowed to divide zero.\n");
            }
            else
            {
                result = 0;
                while(firstNum >= secondNum)
                {
                    firstNum -= secondNum;
                    result++;
                }
                printf("Result: %d / %d = %.2f\n", firstNum, secondNum, result);
            }
            break;
        case 4:
            result = 0;
            for(int i = 0; i < secondNum; i++)
            {
                result += firstNum;
            }
            printf("Result: %d * %d = %.2f\n", firstNum, secondNum, result);
            break;
        default:
            printf("Invalid operation selected.\n");
    }
    
    printf("\n\n");
    
    printf("[1] YES\t");
    printf("[2] NO\n");
    printf("CONTINUE? ");
    scanf("%d", &continueOperation);
    
    printf("\n\n");
    printf("NIGGA, NIGGA, NIGGA!");
    printf("\n\n");

    if(continueOperation == 1)
    {
        main();
    }
    else
    {
        printf("Exiting...\n");
    }
    
}