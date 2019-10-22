import java .util.*;
class palindrome
{
    public static void main()
    {
        Scanner sc = new Scanner(System.in);
        int n= sc.nextInt();
        int d=0,r=0.p=n;
        while(p>0)
        {
            r=r*10+(p%10);
            p/=10;
        }
        if(n==r)
        {
            System.out.println("the no. is a palindrome");
        }
        else
        {
            System.out.println("the no. is not a palindrome");
        }

    }
}
