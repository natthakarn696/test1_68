#include <stdio.h>
void main()
{
    float num1,num2,num3 ;
    printf("Enter number1 : ");
    scanf("%f", &num1);
    printf("Enter number2 : ");
    scanf("%f", &num2);
    printf("Enter number3 : ");
    scanf("%f", &num3);
    printf("Output = \n\t%10.2f\n\t%-10.2f\n\t%10.2f" ,num1,num2,num3);

}