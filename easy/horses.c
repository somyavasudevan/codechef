#include <math.h>
#include <stdio.h>
int main()
{
int ans,T,a,i,j,k;
long int s[5000], min;
scanf("%d",&T);
for(k=0;k<T;k++)
{
scanf("%d",&a);
for(i=0;i<a;i++){
scanf("%ld",&s[i]);
}
min=100000000000;
for(i=0;i<a;i++)
for(j=0;j<a;j++)
{
if(i!=j)
{
ans=abs(s[i]-s[j]);
if (ans<min)
min=ans;
}
}
printf("%ld\n",min);
}
return 0;
}

