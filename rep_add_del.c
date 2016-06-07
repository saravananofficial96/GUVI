#include<iostream>
//#include<stdlib>
#include<algorithm>
#include<string.h>
int length,x=0;
#define read cin>>
#define out cout<<
#define REPLACE 5
#define ADD 4
#define DELETE 3
int hash1[26]={0};
int hash2[26]={0};
int str1length,str2length;
using namespace std;

int main()
{

char *str1=NULL;
char *str2=NULL;
str1=(char *)malloc(1000);
str2=(char *)malloc(1000);
read str1;
read str2;
str1length=strlen(str1);
str2length=strlen(str2);
length=abs(str1length-str2length);

if(!strcmp(str1,str2))
  return 0;
  
  else
  {
      for(int i=0;i<str1length;i++)
            hash1[str1[i]%97]++;
     for(int i=0;i<str2length;i++)
            hash2[str2[i]%97]++;
   
       if(str1length>str2length)
       {
         
         for(int i=0;i<str2length;i++)
            if(hash1[i]!=hash2[i])
                x+=abs(hash1[i]-hash2[i]);
          out x*REPLACE + DELETE ;  
       }
          
       else if(str1length<str2length)
          {
          for(int i=0;i<str2length;i++)
            if(hash1[i]!=hash2[i])
                x+=abs(hash1[i]-hash2[i]);
           out x*REPLACE + ADD ;  
           }
      else
      {
      for(int i=0;i<str2length;i++)
            if(hash1[i]!=hash2[i])
                x+=abs(hash1[i]-hash2[i]);
           out x*REPLACE;
           }
      
      } 
      return 0;
      }
