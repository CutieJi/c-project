#include <stdio.h>

int main()
{
    int MAX = 5;
    int stack[5];
    int top = -1;
    int choice, value;
    int i;

    do
    {
        printf("\n=== Stack ===\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                if(top == MAX - 1)
                {
                    printf("\nStack Overflow! Cannot push.\n");
                }
                else
                {
                    printf("\nEnter value to push: ");
                    scanf("%d", &value);
                    top++;
                    stack[top] = value;
                    printf("\n%d pushed into stack.\n", value);
                }
                break;

            case 2:
                if(top == -1)
                {
                    printf("\nStack Underflow! Nothing to pop.\n");
                }
                else
                {
                    printf("\n%d popped from stack.\n", stack[top]);
                    top--;
                }
                break;

            case 3:
                if(top == -1)
                {
                    printf("\nStack is empty.\n");
                }
                else
                {
                    printf("\nStack elements: ");
                    for (i = top; i >= 0; i--)
                    {
                        printf("%d ", stack[i]);
                    }
                    printf("\n");
                }
                break;

            case 4:
                printf("\nRosh signing off.\nExitinggg...\n");
                return 0;

            default:
                printf("\nInvalid choice! Try again.\n");
        }
    }
    while(choice != 4);
    
    return 0;
}
