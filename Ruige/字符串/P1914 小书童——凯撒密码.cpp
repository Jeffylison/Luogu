#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[100];
    int n,i;
    scanf("%d%s",&n,a);
    for(i=0;a[i]!='\0';i++){
        a[i]+=n;
        if(a[i]>'z')
            a[i]=a[i]-26;
        }
    printf("%s",a);
    return 0;
}
