#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int x;
    int y;

    printf("Type in a number from 1 to 10: ");
    scanf("%d", &x);

    if (x < 1 || x > 10) {
        printf("You did not follow the instructions. Restart\n");
        return 1;
    }

    printf("Type in an even number");
    scanf("%d", &y);

    if (y % 2 != 0) {
        printf("You did not follow the instructions. Restart\n");
        return 1;
    }

    printf("Choose and operations:\n");
    printf("a for Addition\n");
    printf("s for Subtraction\n");
    printf("m for Multiplication\n");
    printf("d for Division\n");
    

    char operation[2];
    scanf("%s", operation);
    if (strcmp(operation, "a") == 0) {
        printf("The result is %d\n", x + y);
    } else if (strcmp(operation, "s") == 0) {
        printf("The result is %d\n", x - y);
    } else if (strcmp(operation, "m") == 0) {
        printf("The result is %d\n", x * y);
    } else if (strcmp(operation, "d") == 0) {
        printf("The result is %d\n", x / y);
    } else {
        printf("You did not follow the instructions. Restart\n");
        return 1;
    }


    return 0;
}