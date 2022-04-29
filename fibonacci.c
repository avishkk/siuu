#include <stdio.h>

int main()
{
    int n,s=0;
    int c=0;
    int a=0,b=1;
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;

    }
    printf("the sum is %d",c);
}