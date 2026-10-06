#include <stdio.h>

int main(){
    // integer 
    int roll = 715400;
    printf("My roll: %d\n", roll);
    // float
    float cgpa = 3.87f;
    printf("My cgpa: %.2f\n", cgpa);

    // double
    double pi = 3.14159;
    printf("Pi = %.15lf\n", pi);
    // char
    char grade = 'A';
    printf("My grade is: %c\n", grade);

    // string
    char name[] = "Jubayed Reza";
    printf("My name is %s.\n", name);
    return 0;
}