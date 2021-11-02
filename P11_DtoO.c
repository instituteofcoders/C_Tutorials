//Decimal to Octal and vice-versa
#include<stdio.h>
void main()
{
    unsigned int n,n1;
    printf("Enter a Decimal unsigned integer number=");
    scanf("%u",&n);
    printf("Equivalent Octal number is=%o",n);

    printf("\nEnter an Octal number=");
    scanf("%o",&n1);
    printf("Equivalent Decimal number is=%u",n1);

    getch();

}
