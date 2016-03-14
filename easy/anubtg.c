#include<stdio.h>
#include <stdlib.h>


int compare (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main()
{

int t,i,sum,n,a[1000],b[1000];

scanf("%d",&t);
while(t--)
{
scanf("%d",&n);

for(i=1;i<=n;i++)
scanf("%d",&a[i]);

sum=0;
qsort(a, n, sizeof(int), compare);

for(i=n;i>0;i=i-4)
sum+=a[i]+a[i-1];

printf("\n%d",sum);

}
}
