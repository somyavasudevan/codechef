#include <iostream>
#include "clock.h"
using namespace std;
int main()
{
int t,i,hr,min,h,m,ans;
cin>>t;
for(i=0;i<t;i++)
{
ans=1;
cin>>h>>m;
for(int i=1;i<10;i++)
{
hr=i;
while(hr<h)
{
min=i;
while(min<m)
{
ans++;
min=min*10+i;                
}
hr=hr*10+i;
}
}
//cout<<ans<<endl;

printclock(ans);
}
return 0;
}










