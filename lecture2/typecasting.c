#include<stdio.h>
void main()
{
     int x = 10, y = 3;
    printf("x + y = %d\n", x + y);   // Addition
    printf("x - y = %d\n", x - y);   // Subtraction
    printf("x * y = %d\n", x * y);   // Multiplication
    printf("x / y = %d\n", x / y);   // Division (integer)
    printf("x %% y = %d\n\n", x % y); // Modulus (remainder)

    // 4. Type Casting (to get decimal result in division)
    float result = (float)x / y;  // explicit type casting
    printf("Type casted division: %.2f\n\n", result);
}