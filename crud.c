#include <stdio.h>

int main()
{
    int crud[100], cm, n, i, pos;
    int cd = 0;

    do
    {
        printf("===== MY CRUD MENU =====\n");
        printf("1. Create\n");
        printf("2. Read\n");
        printf("3. Update\n");
        printf("4. Delete\n");
        printf("5. Search\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &cm);

        switch(cm)
        {
            case 1:
                if(cd)
                {
                    printf("\nElements already given so you cannot create elements again.\n");
                }
                else
                {
                    printf("Enter number of Elements: ");
                    scanf("%d", &n);

                    for (i = 0; i < n; i++)
                    {
                        printf("Enter element: ");
                        scanf("%d", &crud[i]);
                    }
                    cd = 1;
                }
                break;
            case 2:
                printf("\nNumber of elements\n");
                for (i = 0; i < n; i++)
                {
                    printf("%d ", crud[i]);
                }
                break;
            case 3:
                printf("\nCurrent size: %d\n", n);
                printf("Enter position to Update (1 - %d): ", n);
                scanf("\t\t%d", &pos);

                if(pos>n)
                {
                    printf("\nPosition must be less than or equal %d", n);
                }
                else
                {
                    printf("Element at %d Position = %d", pos, crud[pos - 1]);
                    printf("\nEnter new no : ");
                    scanf("%d", &crud[pos - 1]);
                    printf("Element updated at %d position = %d", pos, crud[pos - 1]);
                }
                break;
            case 4:
                printf("\nEnter position to Delete: ");
                scanf("%d", &pos);

                if(pos>n)
                {
                    printf("\nPosition must be less than or equal %d", n);
                }else
                {
                    printf("Position %d is Deleted Successfully...!", pos, crud[pos - 1]);
                    for(i = pos - 1; i < n - 1; i++)
                    {
                        crud[i] = crud[i + 1];
                    }
                    n--;
                }
                break;
            case 5:
                printf("\nEnter position to Search: ");
                scanf("%d", &pos);

                if(pos>n)
                {
                    printf("\nPosition must be less than or equal %d", n);
                }
                else
                {
                    printf("Element at %d Position = %d", pos, crud[pos - 1]);
                }
                break;
            case 6:
                printf("\nRosh signing off.\nExitinggg...\n");
                break;
            default:
                printf("\nInvalid choice. Please try again.\n");
        }
        printf("\n\n");
    }
    while(cm != 6);

    return 0;
}