#include <stdio.h>
int main()
{
int k,T,i,j,n,m,a[100000];

scanf("%d",&T);
for(k=0;k<T;k++)
{
scanf("%d%d",&n,&m);

for(i=1;i<=(n-m);i++)
{a[i]=m+i;
}
j=1;
for(i=(n-m+1);i<=n;i++)
{a[i]=j;j++;
}
i=1;int temp,s=0;
while(i>0&&i<=n)
{
temp=i;
i=a[temp];
a[temp]=0;
s++;
}
s--;
if(s==n)
printf("Yes\n");
else printf("No %d\n",s);
}


}
