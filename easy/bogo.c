#include<stdio.h>
 
int main()
{
int t,h[256],i,cost;
scanf("%d",&t);
char s[201];
while(t--)
{
for(i=0;i<256;i++)
h[i]=0;
scanf("%s",s);
i=0;
while(s[i])
{
h[s[i]]++;
i++;
}
cost=0;
for(i='A';i<='z';i++)
if(h[i]&1)
cost+=h[i]/2 + 1;
else 				
cost+=h[i]/2;
printf("%d\n",cost);
}
return 0;
}  
