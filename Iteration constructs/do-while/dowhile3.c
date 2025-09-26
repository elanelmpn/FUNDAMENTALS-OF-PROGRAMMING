#include <stdio.h>

int main() {
    int guess;
    do {
        printf("Enter guess: ");
        scanf("%d", &guess);
    } while (guess != 7);
    printf("Correct!");
    return 0;
}
