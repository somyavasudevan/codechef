#include <stdio.h>

int main()
{
int n,a,b;
scanf("%d%d",&a,&b);
n=a-b;

if(n%10==0)n++;
else n-=(n%10);
printf("%d\n",n);
return 0;
}
