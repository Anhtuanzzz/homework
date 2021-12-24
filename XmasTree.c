#include <stdio.h>
#include <unistd.h>

main() {
    int a;
    scanf("%i", &a);
    //Print tree
    for (int i = 1; i <= a; i++) {
        for (int j = a - i; j >= 1; j--) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
        if (i % 3 == 0) {
            sleep(1);
        }

    }
    // Print root
    for (int j = a - 2; j >= 1; j --) {
        printf(" ");
    }
    for (int j = 1; j <= 3; j++) {
        printf("|");
    }
    printf("\n");
    for (int j = a - 4; j >= 1; j --) {
        printf(" ");
    }
    for (int j = 1; j <= 7; j++) {
        printf("=");
    }
    printf("\n");
    // Print Merry Christmas
    for (int i = a - 8; i >= 1; i--) {
        printf(" ");
    }
    printf("Merry Christmas");
}