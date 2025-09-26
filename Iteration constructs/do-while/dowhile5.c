#include <stdio.h>

int main() {
    int n, sum = 0;
    do {
        printf("Enter number (0 to stop): ");
        scanf("%d", &n);
        sum += n;
    } while (n != 0);
    printf("Sum = %d", sum);
    return 0;
}
