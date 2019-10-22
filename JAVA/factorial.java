import java.util.*;
import java.io.*;
class factorial
{
public static void main(String args[]) throws IOException{
{
Scanner sc=new Scanner(System.in);
int n=sc.nextInt();
int f=1;
for(int i=1;i<=n;i++)
{
f=f*i;}
System.out.println("the factorial of the no. "+f);
}}
