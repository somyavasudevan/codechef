#include <stdio.h>
#include <assert.h>
#include <string.h>
 
int main()
{
int T;
scanf("%d",&T);
while(T--)
{
char s[100];
scanf("%s",s);
int L=strlen(s);
int ans=0;
for(int i=0;i<L;i++)
{
if(s[i]=='B') ans+=2; else
if(s[i]=='A' || s[i]=='D' || s[i]=='O' || s[i]=='P' || s[i]=='Q' || s[i]=='R') ans++;
}
printf("%d\n",ans);
}
return 0;
}

