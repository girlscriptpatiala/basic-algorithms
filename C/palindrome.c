#include <stdio.h>
void main()
{
        int n;
        scanf("%d\n",&n);
        int d=0,r=0.p=n;
        while(p>0)
        {
            r=r*10+(p%10);
            p/=10;
        }
        if(n==r)
        {
            printf("the no. is a palindrome");
        }
        else
        {
            printf("the no. is not a palindrome");
        }
        
        }
