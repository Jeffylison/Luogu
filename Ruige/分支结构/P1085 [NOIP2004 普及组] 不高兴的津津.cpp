#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[7],b[7],i,max;
    for(i=0;i<7;i++)
        scanf("%d%d",&a[i],&b[i]);
    max=a[0]+b[0];
    for(i=0;i<7;i++)
        if(max<a[i]+b[i])
            max=a[i]+b[i];
    if(max<=8) printf("0");
    else {for(i=0;i<7;i++)if(max==a[i]+b[i]){printf("%d",i+1);break;}}
    return 0;
}
