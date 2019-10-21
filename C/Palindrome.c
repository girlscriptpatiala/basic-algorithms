#include <stdio.h>

int main()
{
int num,temp,b,sum=0;
printf("Enter the no. to be checked:\n");
scanf("%d",&num);
temp=num;

while(num>0)
{
b=num%10;
sum=sum*10+b;
num=num/10;
}

if(sum==temp)
	{printf("The no. is a Palindrome");}
else
	{printf("The no. is not a Palindrome:");}

return 0;

}

