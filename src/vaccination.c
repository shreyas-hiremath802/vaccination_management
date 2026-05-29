#include <stdio.h>

int main() {
    int age;
    int vaccinated;

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Vaccinated? (1 = Yes, 0 = No): ");
    scanf("%d", &vaccinated);

    if(age >= 18) {
        if(vaccinated == 1) {
            printf("Person is vaccinated.\n");
        }
        else {
            printf("Person is NOT vaccinated.\n");
        }
    }
    else {
        printf("Person is underage for vaccination.\n");
    }

    return 0;
}