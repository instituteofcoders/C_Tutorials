//Decimal to Hexa Decimal and vice-versa
#include<stdio.h>
void main()
{
    int n,n1;
    printf("Enter a Decimal unsigned integer number=");
    scanf("%d",&n);
    printf("Equivalent Hexa Decimal number is=%X",n);

    printf("\nEnter a Hexa Decimal number=");
    scanf("%x",&n1);
    printf("Equivalent Decimal number is=%d",n1);

    getch();

}
