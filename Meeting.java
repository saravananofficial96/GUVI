/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */

class Ideone
{
	static int count;
	static void swap(int x[],int y[],int size){
		
		int temp,temp1;
		for(int i=0;i<size-1;i++)
		 {
		 	for(int j=i+1;j<size;j++)
		 	{
		 		if(x[i]>x[j])
		 		 {
		 		 	temp=x[i]; temp1=y[i];
		 		 	x[i]=x[j];	y[i]=y[j];
		 		 	x[j]=temp;  y[j]=temp1;
		 		 	
		 		 }
		 	}
		 }
	}
	public static void main (String[] args) throws java.lang.Exception
	{
	try{	int size;
		Scanner scan=new Scanner(System.in);
		size=scan.nextInt();
	int S[]=new int[size];
	int F[]=new int[size];
	
	for(int i=0;i<size;i++)
	   S[i]=scan.nextInt();
	for(int i=0;i<size;i++)
	   F[i]=scan.nextInt();
	  
	   swap(S,F,size);
	   for(int i=0;i<size-1;i++)
	    	if(F[i+1]>F[i])
	    	    ++count;
	   System.out.println(count);
	}
	catch(Exception e){
		 System.out.println("Invalid Input");
	}
	
	   
	   
	   
	}
}
