#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int T,n,Ke,a[100000],b[100000],c[100000],i;
cin>>T;
while(T--)
{
cin>>n>>Ke;

for(i=0;i<n;i++)
{cin>>a[i];}

for(i=0;i<n;i++)
{cin>>b[i];}

int k=0;

for(i=0;i<n;i++)
if(a[i]<=0&&b[i]<=0)
{c[k]=i;k++; cout<<"yo1";}
else if (a[i]>=0&&b[i]>=0)
{c[k]=i;k++;cout<<"yo2";}

int max = 0,pos=-1,flag=0;

for(i = 0; i < k; i++) { 
    if(max<abs(a[c[i]])) {max = abs(a[c[i]]);pos=c[i];flag=1;}
}
for(i = 0; i <n; i++) {
    if(max<abs(b[c[i]])) {max = abs(b[c[i]]);pos=c[i];flag=2;}
}  


cout<<"max"<<max<<pos<<flag;

if(flag==1)
{if(b[pos]>=0)b[pos]+=Ke; else b[pos]-=Ke; }
else if (flag==2){if(a[pos]>=0)a[pos]+=Ke; else a[pos]-=Ke;}


int ans=0;
for(i=0;i<n;i++)
{ans+=a[i]*b[i];}
cout<<ans<<endl;
}
return 0;
}
