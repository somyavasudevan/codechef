#include <stdio.h>
#include <math.h>
int prime(long long a,long long int b)
{
long long int c;
while (a!=0) 
{
c=a;
a=b%a;
b=c;
}
return b;
}
int main(){
int t;long long n,m,temp,count,x;
scanf("%d",&t);
while(t--)
{
scanf("%lld %lld",&n,&m);
if(n==1)
printf("Yes\n");
else if(!m)
printf("No 1\n");
else if(prime(n,m)==1)
printf("Yes\n");
else
{
printf("No %lld\n",n/prime(n,m));
}
}
return 0;
} 
