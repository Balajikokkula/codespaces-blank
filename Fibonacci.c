// Fibonacci series
#include<stdio.h>
int main()
{
    int n,a=0,b=1,i,c;
    printf("The number of elements in the fibonacci series:\n");
    scanf("%d,&n");
    printf("The fibonacci series is: %d\t%d",a,b);
    for(i=3;i<=n;i++)
    {
    c=a+b;
    a=b;
    b=c;
    printf("\t%d",c);
    }
}
