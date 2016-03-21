#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
	int T;
	long long int N,max,i,key,A[100005]={0},B[100005]={0},K,ans;
	
	cin >> T;
	while(T--)
	{
		ans=0;
		cin >> N >> K;
		for(i=0;i<N;i++)
		{
			cin>>A[i];
		}
		
		for(i=0;i<N;i++)
		{
			cin>>B[i];
			if (i == 0)
			{
				max=abs(B[i]);
				key=i;
			}
			else if (abs(B[i]) > max)
			{
				max=abs(B[i]);
				key=i;
			}
			
		}
		
 
		if(B[key] > 0)
		{
			A[key]+=K;
		}
		else
		{
			A[key]-=K;
		}
			
		for(i=0;i<N;i++)
		{
				ans+=A[i]*B[i];
		}
		
		cout<<ans<<endl;
	}
	
	return 0;
}
