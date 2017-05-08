#include <stdio.h>
	int main(int argc, char *argv[])
{
	int numbers[4] = {0};
	char name[4] = {'a','b','c','d'};
	
	//first print them out raw
	
	printf("number: %d %d %d %d \n" ,numbers[0],numbers[1],numbers[2],numbers[3]);

	printf("name each: %c %c %c %c\n" ,name[0],name[1],name[2],name[3]);
	
	printf("name: %s\n", name);
	
	//set up the numbers
	numbers[0] = 1;
	numbers[1] = 3;
	numbers[2] = 4;
	numbers[3] = 2;

	//set up the name
	name[0] = 'R';
	name[1] = 'O';
	name[2] = 'Y';
	name[3] = 'X';
	
//then print them out initialized

	printf("numbers: %d %d %d %d\n", numbers[0],numbers[1],numbers[2],numbers[3]);
	
	printf("name each: %c %c %c %c\n", name[0],name[1],name[2],name[3]);
	
	//print the name like a string

	printf("name: %s\n", name);
	
 	char *another = "Roy";

	printf("another: %s\n", another);
	
	printf("another each: %c %c %c %c \n", another[0],another[1],another[2],another[3]);
	
	return 0;
}

