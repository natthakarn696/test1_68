#include <stdio.h>
void main ()
{
    int i,count =8 ,num,sum;
    float av=0;
    for ( i = 1; i <= count; i++)
    {
    printf("Enter number %d : ", i);
    scanf ("%d",&num);
    sum=sum+num;
    }
    av = sum/count;
    printf ("Average : %.2f" ,av);
}