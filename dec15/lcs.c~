#include<stdio.h>
#include<string.h>
int main()
{
int t, n, ans, amax,bmax,tem1,tem2,i,j,m;
char s[201];
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
//  printf("n=%d\n",n);
ans=0;
amax=200;
bmax=200;
for(i=0;i<n;i++)
{
scanf("%s",s);
m=strlen(s);
// printf("m=%d\n",m);
tem1=0;
tem2=0;
for(j=0;j<m;j++)
{
if(s[j]=='a')
tem1++;
else
tem2++;
}
if(tem1<amax)
amax=tem1;
if(tem2<bmax)
bmax=tem2;
}
if(amax<bmax)
ans=amax;
else
ans=bmax;
if(n==0)
ans=0;
printf("%d\n",ans);
}
return 0;
} 
