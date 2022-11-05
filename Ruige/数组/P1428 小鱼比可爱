#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,t,a[100],j;
    t=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    printf("0 ");
    for(i=1; i<n; i++)
    {
        for(j=i-1; j>=0; j--)
        {
            if(a[j]<a[i])
                t++;
        }
        printf("%d ",t);
        t=0;
    }
    return 0;
}
