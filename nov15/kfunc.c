#include <stdio.h>
int digit(int a)
{int sum=0;
while(a>=1)
{sum+=a%10;
a=a/10;}
return sum;
}
int main()
{int t,k,n1,n2,i,a,d,arr[1000],answer;
scanf("%d",&t);
for(k=0;k<t;k++)
{
answer=0;
scanf("%d%d%d%d",&a,&d,&n1,&n2);
for(i=0;i<(n2-n1+1);i++)
arr[i]=a+(n1+i-1)*d;
for(i=0;i<(n2-n1+1);i++)
{
while(arr[i]>9)
arr[i]=digit(arr[i]);
//printf("\n%d",arr[i]);
answer+=arr[i];
}
printf("\n%d",answer);
}
}
