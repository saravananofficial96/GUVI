#include <iostream>
#define read cin>>
#define out  cout<<
using namespace std;

long int num=0;
int number_of_coin(long int sum)
   {
    if(sum<3)
	     return sum;
	if(sum<5 && sum>=3)
	   return number_of_coin(sum%3)+sum/3;
    if(sum>=5)
	 return number_of_coin(sum%5)+sum/5;


	      
	     
	
	 }
int main(void) {
	// your code goes here
	long int sum;
	read sum;
	
	out number_of_coin(sum);
	
	return 0;
}
