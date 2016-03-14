#include <iostream>
using namespace std;
int main()
{

int T,n;
cin>>T;
for(int i=0;i<T;i++)
{
cin>>n;
if(n%2==0)
cout<<n<<endl;
else cout<<n-1<<endl;
}
return 0;

}
