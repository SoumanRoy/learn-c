#include<stdio.h>

int main(){
	int age;     			    /* variable */;
	printf("Enter your age:");          /* This will ask your age */
	scanf("%d",&age);                   /*thi will store your input into variable age */

	if(age<25){			      /* check the condition */
		printf("you are from gen Z.\n");
	}else if(age>50){
		printf("you are from gen y.\n");
	}else {
		printf("You're Middle Age.\n");
	}
	return 0;
}

