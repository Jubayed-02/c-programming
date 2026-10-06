// basic arithmetic operations in C
#include <stdio.h>
int main(){
    // some constant value
    int x = 3, y = 4;
    // addition
    int addition = x + y;
    printf("%d + %d = %d\n", x, y, addition);

    // subtraction
    int sub = x - y;
    printf("%d - %d = %d\n", x, y, sub);

    // multiplication
    int mul = x * y;
    printf("%d x %d = %d\n", x, y, mul);

    // division
    float z = y;
    float div = x / z;
    printf("%d / %d = %f\n", x, y, div);
    
    return 0;
}