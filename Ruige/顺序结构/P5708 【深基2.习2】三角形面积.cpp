#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,p,sum;
    scanf("%lf %lf %lf",&a,&b,&c);
    p=(a+b+c)/2;
    sum=p*(p-a)*(p-b)*(p-c);
    sum=sqrt(sum);
    printf("%.1lf",sum);
    return 0;
}

