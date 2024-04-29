#include <stdio.h>

void printStarPattern(int rows) {
    int i, j;

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printStarPattern(rows);

    return 0;
}
