#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=2) printf("Today, I ate %d apples.",n);
    else printf("Today, I ate %d apple.",n);
    return 0;
}
