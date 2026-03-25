#include <stdio.h>
#include <stdlib.h>

int main() {
    int result = system("printf \"5\n1 2 3 4 5\n\" | ../usr/bin/maxfinder");
    if (result != 0) {
        printf("Test failed\n");
        return 1;
    }
    printf("Test passed\n");
    return 0;
}
