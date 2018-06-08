/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */

class FindNumber
{
     static boolean search(int x[],int value,int size,int currentPosition)
        {
     	for(int i=0;i<size;i++)
     	  
     	    if(value==x[i] && i!=currentPosition)
     	      return true;
     	  
     	return false;
          }
  public static void main (String[] args) throws java.lang.Exception
	{
	try{	int size,number,value;
	            boolean bool;
		Scanner scan=new Scanner(System.in);
		size=scan.nextInt();
		number=scan.nextInt();
	int S[]=new int[size];
	
	for(int i=0;i<size;i++)
	   S[i]=scan.nextInt();
	   
	for(int i=0;i<size;i++)
	   {
	       value=number-S[i];
	       bool=search(S,value,size,i);
	       if(bool)
	         {
	         	System.out.println("YES"); 
	         	return ;
	         }
	   }
	   
	   System.out.println("NO"); 
	}
	catch(Exception e){
		 System.out.println("Invalid Input");
	}
		
	}
        
      }
