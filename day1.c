///Write a program to input two numbers and display their sum.

# include <stdio.h>
int main()
{
    int a,b,sum , multiplication , difference ;
    float  quotient ;
    printf("enter a number");
    scanf("%d",&a);
    printf("enter another number");
    scanf("%d",&b);
    sum=a+b;
    printf("%d+%d=%d",a,b,sum);






//Write a program to input two numbers and display their sum, difference, product, and quotient.
    difference = a-b;
    multiplication= a*b; 
    quotient = (float)a/b;

    
    printf("\nSum ,%d+%d=%d", a,b,sum);
    printf("\nDifference =  ,%d-%d=%d", a,b,difference);
    printf("\nProduct = ,%d*%d=%d", a,b,multiplication);

    if (b != 0) {
        printf("\n Quotient = %.2f \n", quotient);
    } else {
        printf("\nQuotient = Undefined (division by zero not allowed)\n");
    }

    return 0;
}