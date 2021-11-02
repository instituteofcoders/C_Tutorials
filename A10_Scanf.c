//Use of scanf()
#include<stdio.h>
void main()
{
    float l,b;
    printf("Enter length(in cm.)=");
    scanf("%f",&l);
    printf("\nEnter breadth(in cm.)=");
    scanf("%f",&b);
    float a=l*b;
    float p=2*(l+b);
    printf("Area=%fsq.cm.\n",a);
    printf("Perimeter=%fcm.",p);
    getch();

}
