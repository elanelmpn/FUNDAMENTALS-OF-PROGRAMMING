#include <stdio.h>

int main() {
    int i = 1, fact = 1;
    while (i <= 5) {
        fact *= i;
        i++;
    }
    printf("Factorial = %d", fact);
    return 0;
}
