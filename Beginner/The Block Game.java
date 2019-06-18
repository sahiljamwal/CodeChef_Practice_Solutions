//https://www.codechef.com/problems/PALL01

/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		 Scanner s =new Scanner(System.in);
		 int t=s.nextInt();
		 
		 for(int i=0;i<t;i++)
		 {
		     int n=s.nextInt();
		     int no=n;
		     int check=n;
		     
		     int count=0;
		     while(no>0)
		     {
		         no/=10;
		         count++;
		     }
		     
		     long ans=0;
		     for(int k=0;k<count;k++)
		     {
		         int q=n/10;
		         int r=n%10;
		         ans+=r*Math.pow(10,count-k-1);
		         n=q;
		         
		     }
		     
		     if(check==ans)
		        System.out.println("wins");
		      else
		        System.out.println("losses");
		     
		 }
		 
		 
		 
		
	}
}
