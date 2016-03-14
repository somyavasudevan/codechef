#include <stdio.h>
#include<stdlib.h>
int main()
{
long int N;
int flag;
scanf("%ld",&N);
printf("\n");
int i,j,k=0;

int *a =(int*)malloc(N* sizeof(int));
int *b =(int *)malloc(N* sizeof(int));
for(i=1;i<=N;i++)
scanf("%d",&a[i]);

for(i=1;i<=N;i++)
{
flag=0;
for(j=1;j<=N;j++)
if(i==a[j])
flag=1;
if(flag==0){b[k]=i;k++;}
}

int tmp;
for (i=0;i<k;++i)
    {
        for (j = i + 1; j < k; ++j)
        {
            if (b[i] > b[j])
            {
                tmp =  b[i];
                b[i] = b[j];
                b[j] = tmp;
            }
        }
    }

for(i=0;i<k;i++)
printf("%d ",b[i]);


}

