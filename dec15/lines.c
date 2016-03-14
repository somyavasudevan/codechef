#include <stdio.h>
int main()
{

int i,n,t,a[100][3],temp,ans,j;
float slope[100];
scanf("%d",&t);

while(t--)
{
scanf("%d",&n);

for(i=0;i<n;i++)
for(j=0;j<3;j++)
scanf("%d",&a[i][j]);

for(i=0;i<n;i++)
{
slope[i]=a[i][0]/a[i][1];
}
temp=0;ans=0;
for(i=0;i<n;i++)
{

if(temp>ans) ans=temp;
temp=0;
for(j=0;j<n;j++)
{
if(slope[i]==slope[j])
	{	if((a[i][1]/a[j][1])!=(a[i][2]/a[j][2]))
		{temp++;}
	}

}
if(i==1)ans=temp;
}

}

printf("\n answer is :%d",ans);
}

