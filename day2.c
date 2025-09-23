///Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main()
{
    float a,b,area,perimeter,circumference ,carea,r;

    printf("enter length \n");
    scanf("%f",&a);
     printf("enter breadth \n");
    scanf("%f",&b);
    area = a*b;
    perimeter=2*(a+b);
    printf("perimeter of the rectangle= %f \n",perimeter);
    printf("area of the rectangle= %f \n",area);


///Write a program to calculate the area and circumference of a circle given its radius.
    printf( "enert the radius \n");
    scanf("%f",&r);
    carea=r*r*3.14;
    circumference=2*3.14*r;
    printf("circumfernce of circle %.4f \n",circumference);
    printf("are of circle %.4f  \n",carea);
    
return 0;
}