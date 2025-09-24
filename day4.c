///Write a program to swap two numbers without using a third variable.
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Original numbers: a = %d, b = %d\n\n", a, b);

    // -------- Method 1: Using Addition and Subtraction --------
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping using + and - : a = %d, b = %d\n", a, b);

    // Swap back to original for next method
    a = a + b;
    b = a - b;
    a = a - b;

    // -------- Method 2: Using XOR --------
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After swapping using XOR : a = %d, b = %d\n", a, b);

    // Swap back to original for next method
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    // -------- Method 3: Using Multiplication and Division --------
    // Note: This works only if a and b are not zero
    if(a != 0 && b != 0) {
        a = a * b;
        b = a / b;
        a = a / b;
        printf("After swapping using * and / : a = %d, b = %d\n", a, b);
    } else {
        printf("Multiplication/Division method skipped (numbers should not be zero).\n");
    }

    
///Write a program to find and display the sum of the first n natural numbers.

int x,sum;
    printf("enter the natural number: \n");
    scanf("%d",&x);
    sum= x/2 *(2+(x-1));
    printf("sum of %d natural numbers is %d \n", x,sum);

    return 0;
}
