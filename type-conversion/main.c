#include <stdio.h>

int main()
{
    // Automatic conversion: int to float
    float y = 7; // 7 is an integer
    printf("y = %f\n", y);

    // Automatic conversion: float to int
    int x = 9.99; // value is a float
    printf("x = %d\n", x);

    // problem of autometic conversion
    int a = 5;
    int b = 2;
    float result = a / b;
    printf("%d / %d = %.3f (expected: 2.500)\n", a, b, result);

    // explicit conversion
    int num1 = 5;
    int num2 = 2;
    float sum = (float)num1 / num2;
    printf("%d / %d = %.3f\n",num1, num2, sum); // 2.500000
    return 0;
}