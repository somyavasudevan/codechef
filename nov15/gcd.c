#include <stdio.h>

int gcd(int a, int b)
{
    if (a == b) return a;
    if (a > b) return gcd(a-b, b);
    return gcd(a, b-a);
}

int main()
{
int i,j;
long int n,sum,T;
scanf("%ld",&T);
for(i=0;i<T;i++)    
{
scanf("%ld",&n);
sum=0;
for(j=1;j<=n;j++)
{
sum+=n/gcd(j,n);
}
printf("\n%ld",sum);
}

}
