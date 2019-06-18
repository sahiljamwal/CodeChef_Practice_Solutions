//https://www.codechef.com/problems/FLOW011

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
		int t =s.nextInt();
		for(int i=0;i<t;i++)
		{
		    int bs=s.nextInt();
		    double hra,da;
		    double gs;
		    
		    if(bs>=1500)
		    {
		        hra=500;
		        da=(0.98)*bs;
		        gs=bs+hra+da;
		    }
		    else
		    {
		        hra=0.1*bs;
		        da=0.9*bs;
		        gs=bs+hra+da;
		    }
		    
		    System.out.printf("%.2f \n",gs);
	
		}
	}
}
