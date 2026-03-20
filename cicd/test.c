#include <stdio.h>
#include <stdlib.h>

int main() {
    int result = system("echo \"5 1 2 3 4 5\" | ../usr/bin/maxfinder");
    if (result != 0) {
        printf("Test failed\n");
        return 1;
    }
    printf("Test passed\n");
    return 0;
}