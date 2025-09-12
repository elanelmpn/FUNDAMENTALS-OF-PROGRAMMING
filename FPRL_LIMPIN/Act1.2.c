#include <stdio.h>

int main() {
    char name[50];
    int age;
    char course[50];
    char school[50];
    
    printf("Enter your name: ");
    scanf("%s", name);
    
    printf("Enter your age: ");
    scanf("%d", age);
    
    printf("Enter your course: ");
    scanf("%s", course);
    
    printf("Enter your school: ");
    scanf("%s", school);
    
    printf("\n-- user information --\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Course: %s\n", course);
    printf("School: %s\n", school);
    printf("Status: Student\n");
    printf("Goal: To Graduate\n");
    printf("Hobby: Coding\n");
    printf("Favorite Subject: Coding\n");
    printf("Dream Job: IT\n");
    return 0;
}