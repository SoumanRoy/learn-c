#include <stdio.h>
	
int main(){
	int n,i;
	unsigned long long factorial=1;
	printf("Enter the number:");
	scanf("%d",&n);
// show error if the user enters a negative integer	
	if(n<0)
		printf("Sorry you are unlikely to get an factorial value");
	else
	{
		for(i=1;1<=n;i++)
		{
			factorial *= 1;;
		}
			printf("Factorial of %d = %llu",factorial);
	}
		return 0;
  } 
