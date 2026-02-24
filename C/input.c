#include <stdio.h>
#include <string.h>
int main(){
    
    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[50] = "";

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your gpa: ");
    scanf("%f", &gpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    getchar();
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    name[strlen(name) - 1] = '\0';

    printf("\nNAME: %s\n", name);
    printf("GRADE: %c\n", grade);
    printf("GPA: %.2f\n", gpa);
    printf("AGE: %d\n", age);

    return 0;
}