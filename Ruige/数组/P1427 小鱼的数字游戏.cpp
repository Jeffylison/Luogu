#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    int a[100];
    for(i=0;a[i-1]!=0;i++)
        scanf("%d",&a[i]);
    for(i-=2;i>=0;i--)
        printf("%d ",a[i]);
    return 0;
}
