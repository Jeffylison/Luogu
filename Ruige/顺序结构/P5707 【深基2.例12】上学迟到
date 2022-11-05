#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s,v,hh,mm,t;
    scanf("%d%d",&s,&v);
    t=s/v;
    if(s%v!=0)
        t++;
    hh=7,mm=60;
while(mm-t-10<0)
    {
        if(hh>=0)
        mm+=60,hh-=1;
        else
            hh=23;
    }
    printf("%02d:%02d",hh,mm-t-10);
    return 0;
}
