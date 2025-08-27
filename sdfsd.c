#include <stdio.h>

int main() {
    int number = 7; // You can change this to any odd number greater than 3

    // 1. DrawLine
    for (int i = 0; i < number; i++) {
        printf("*");
    }
    printf("\n\n");

    // 2. DrawStripedLine
    for (int i = 0; i < number; i++) {
        if (i % 2 == 0) {
            printf("*");
        } else {
            printf("_");
        }
    }
    printf("\n\n");

    // 3. DrawSquare
    for (int i = 0; i < number; i++) {
        for (int j = 0; j < number; j++) {
            printf("*");
        }
        printf("\n\n");
    }

    // 4. DrawParallelogram
    for (int i = 0; i < number; i++) {
        for (int j = 0; j < number - i - 1; j++) {
            printf("_");
        }
        for (int j = 0; j < number; j++) {
            printf("*");
        }
        for (int j = 0; j < i; j++) {
            printf("_");
        }
        printf("\n\n");
    }

    // 5. DrawTriangle
    for (int i = 0; i < number; i++) {
        for (int j = 0; j < number - i; j++) {
            printf("*");
        }
        for (int j = 0; j < i; j++) {
            printf("_");
        }
        printf("\n\n");
    }

    // 6. DrawReverseTriangle
    for (int i = 0; i < number; i++) {
        for (int j = 0; j < i + 1; j++) {
            printf("*");
        }
        for (int j = 0; j < number - i - 1; j++) {
            printf("_");
        }
        printf("\n\n");
    }

    // 7. DrawIsocelesTriangle
    for (int i = 0; i < number; i++) {
        for (int j = 0; j < number - i - 1; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n\n");
    }

    // 8. DrawReverseIsocelesTriangle
    for (int i = 0; i < number; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int j = 0; j < number - 2 * i; j++) {
            printf("*");
        }
        printf("\n\n");
    }

    // 9. DrawHourGlass
    for (int i = 0; i < number; i++) {
        if (i < number / 2) {
            for (int j = 0; j < i; j++) {
                printf("_");
            }
            for (int j = 0; j < number - 2 * i; j++) {
                printf("*");
            }
        } else {
            for (int j = 0; j < number - i - 1; j++) {
                printf("_");
            }
            for (int j = 0; j < 2 * (i - (number / 2)) + 1; j++) {
                printf("*");
            }
        }
        printf("\n\n");
    }

    // 10. DrawDiamond
    for (int i = 0; i < number; i++) {
        if (i < number / 2) {
            for (int j = 0; j < number / 2 - i; j++) {
                printf("_");
            }
            for (int j = 0; j < 2 * i + 1; j++) {
                printf("*");
            }
        } else {
            for (int j = 0; j < i - number / 2; j++) {
                printf("_");
            }
            for (int j = 0; j < 2 * (number - i - 1) + 1; j++) {
                printf("*");
            }
        }
        printf("\n\n");
    }

    // 11. DrawZero
    for (int i = 0; i < number; i++) {
        if (i == 0 || i == number - 1) {
            for (int j = 0; j < number; j++) {
                printf("*");
            }
        } else {
            printf("*");
            for (int j = 0; j < number - 2; j++) {
                printf("_");
            }
            printf("*");
        }
        printf("\n\n");
    }

    // 12. DrawArrowUp
    int base_width = (number / 2) + 1;
    for (int i = 0; i < base_width; i++) {
        for (int j = 0; j < base_width - i - 1; j++) {
            printf("_");
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n\n");
    }
    for (int i = 0; i < base_width; i++) {
        for (int j = 0; j < base_width - 1; j++) {
            printf("_");
        }
        printf("***\n");
    }

    // 13. DrawArrowDown
    for (int i = 0; i < base_width; i++) {
        for (int j = 0; j < base_width - 1; j++) {
            printf("_");
        }
        for (int j = 0; j < 2 * (base_width - i) - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i < base_width; i++) {
        printf("*");
    }
    printf("\n\n");

    // 14. DrawX
    for (int i = 0; i < number; i++) {
        char line[number + 1];
        for (int j = 0; j < number; j++) {
            line[j] = '_';
        }
        line[i] = '*';
        line[number - i - 1] = '*';
        line[number] = '\0';
        printf("%s\n", line);
    }

    // 15. DrawBowTie
    for (int i = 0; i < number / 2; i++) {
        for (int j = 0; j < i + 1; j++) {
            printf("*");
        }
        for (int j = 0; j < number - 2 * (i + 1); j++) {
            printf("_");
        }
        for (int j = 0; j < i + 1; j++) {
            printf("*");
        }
        printf("\n\n");
    }
    for (int j = 0; j < number; j++) {
        printf("*");
    }
    printf("\n\n");
    for (int i = number / 2 - 1; i >= 0; i--) {
        for (int j = 0; j < i + 1; j++) {
            printf("*");
        }
        for (int j = 0; j < number - 2 * (i + 1); j++) {
            printf("_");
        }
        for (int j = 0; j < i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}