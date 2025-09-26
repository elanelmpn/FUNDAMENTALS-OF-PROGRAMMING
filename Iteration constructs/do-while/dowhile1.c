#include <stdio.h>

int main() {
    int choice;
    do {
        printf("\n1. Option A\n2. Option B\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);
    } while (choice != 3);
    return 0;
}
