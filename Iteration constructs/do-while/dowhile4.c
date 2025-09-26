#include <stdio.h>

int main() {
    int i = 1, fact = 1;
    do {
        fact *= i;
        i++;
    } while (i <= 5);
    printf("Factorial = %d", fact);
    return 0;
}
