#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,t=0;
    scanf("%d",&n);
    if(n%2==0) t++;
    if(n>=4&&n<=12) t++;
    if(t==2) printf("1 1 0 0");
    else if(t==1) printf("0 1 1 0");
    else if(t==0) printf("0 0 0 1");
    return 0;
}
