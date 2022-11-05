#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,n,a[1000],i;
    scanf("%d",&n);
    a[0]=n;
    for(i=0;;i++)
    {
        if(n==1)
            break;
        if(a[i]%2!=0)
        {
            n=n*3+1;
            a[i+1]=n;
        }
        else
        {
            n=n/2;
            a[i+1]=n;
        }
    }
    for(i;i>=0;i--)
        printf("%d ",a[i]);
    return 0;
}
