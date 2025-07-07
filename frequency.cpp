



#include <stdio.h>
int main ()
{
    int a=0,b=1,c,n,i,sum=1;
    printf("Enter no.of elements :");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        c=a+b;
        sum=sum+c;
        a=b;
        b=c;
    }
    printf("The sum of fibinoccai series of %d elements is :%d",n,sum);
}


