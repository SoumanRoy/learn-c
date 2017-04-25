#include<stdio.h>

int  main (){

	char grade;

	printf("Enter your grade:");
	scanf("%c",&grade);

	switch(grade){
		case 'A':
		   printf("Wow! you got super grade.\n");
		break;
		
		case 'B':
		   printf("Yo,you got second grade.\n");
		break;

		case 'C':
		case 'D':
	           printf("very good grade.\n");
		break;

 		case 'E':
		   printf("Work hard buddy.\n");
		break;
		default:
 		   printf("Invalid grade.\n");
	}
	
	return 0;
}

