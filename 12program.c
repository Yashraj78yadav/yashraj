// C program for area and perimeter of rectangle.
#include<stdio.h>
int main(){
    float l,b,A,P;
    printf("Enter the value of length l of rectangle  : ");
    scanf("%f",&l);
    printf("Enter the value of breadth b of rectangle  : ");
    scanf("%f",&b);
    A=(l*b);
    printf("Area of rectangle is : %f \n",A);
    P=(2*(l+b));
    printf("The perimeter of rectangle is %f  ",P);
    return 0;
}