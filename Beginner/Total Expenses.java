//https://www.codechef.com/problems/FLOW009

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
		    int quantity=s.nextInt();
		    int cost=s.nextInt();
		    double price;
		    if(quantity>1000)
		    {
		        double discount=(0.1)*quantity*cost;
		        price=quantity*cost-discount;
		    }
		    else
		    {
		        price=quantity*cost;
		        
		    }
		    
		    System.out.printf("%.6f \n",price);
		}
		
	}
}
