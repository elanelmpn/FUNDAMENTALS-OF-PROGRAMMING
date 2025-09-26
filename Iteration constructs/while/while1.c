#include <stdio.h>

int main() {
    int n;
    printf("Enter numbers (0 to stop): ");
    scanf("%d", &n);
    while (n != 0) {
        printf("You entered: %d\n", n);
        scanf("%d", &n);
    }
    return 0;
}
