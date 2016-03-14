#include <stdio.h>
#include <stdlib.h>
int is_prime(int num)
{
     int i;
     if (num <= 1) return 0;
     if (num % 2 == 0) return 1;
     for(i = 3; i < num / 2; i+= 2)
     {
         if (num % i == 0)
             return 0;
     }
     return 1;
}

int is_palindrome(int num)
{
int n = num;
int reverse = 0;
while (num > 0)
{
int dig = num % 10;
reverse=reverse*10+dig;
num=num/10;
}
if(n==reverse)return 1;
else return 0;
}

int main()
{
int a; scanf("%d",&a);
if(a==1){printf("2");exit(0);}

if(a%2==0)a++;
while(a>0)
{
a+=2;
if(is_prime(a)==1&&is_palindrome(a)==1)
break;

}
printf("%d",a);
return 0;
}
