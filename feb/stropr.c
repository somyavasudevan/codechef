#include <stdio.h>
#include<stdlib.h>
main()
{

int T,i,j,x,k;
long int M,N;
scanf("%d",&T);



/*
int *a =(int*)malloc(N* sizeof(int));
int *b =(int *)malloc(N* sizeof(int));
for(i=1;i<=N;i++)
scanf("%d",&a[i]);
*/


for(k=0;k<T;k++)
{


scanf("%ld %d %ld",&N,&x,&M);
//printf("\n");

int *a =(int*)malloc(N* sizeof(int));
for(i=1;i<=N;i++)
scanf("%d",&a[i]);

for(j=0;j<M;j++)
for(i=2;i<=N;i++)
a[i]+=a[i-1];

printf("%d\n",a[x]%1000000007);
}



}
