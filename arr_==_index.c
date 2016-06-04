#include <stdio.h>

int main(void) {
	// your code goes here
	int i,n;
	int arr[1000];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	  {
	  	scanf("%d",&arr[i]);
	    if(!(arr[i]-i))
	    printf("%d ",i);
	  }
	return 0;
}
