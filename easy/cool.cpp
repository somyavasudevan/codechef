#include <stdio.h>
#include <algorithm>
int limit[40];
int weight[40];
int main()
{
int T;
scanf("%d",&T);
for(int tst=1;tst<=T;tst++)
{
int n;
scanf("%d",&n);
//printf("n=%d\n", n);
for(int i=0;i<n;i++)
{
scanf("%d",&weight[i]);}
for(int i=0;i<n;i++)
{scanf("%d",&limit[i]);
}

std::stable_sort(limit,limit+n);
std::stable_sort(weight,weight+n);
int res=0;
for(int i=0,j=0;i<n&&j<n;i++) 
{
while(j<n&&weight[i]>limit[j])
j++;
if (j<n) 
{
res++;
j++;
}
}
printf("%d\n",res);
}
return 0;
}
