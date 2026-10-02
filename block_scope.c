#include <stdio.h>

int main() {
    int value = 10;

    printf("Outside block: %d\n", value);

    {
        int value = 20;
        printf("Inside block: %d\n", value);
    }

    printf("Outside block again: %d\n", value);

    return 0;
}
