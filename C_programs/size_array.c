#include <stdio.h>
int main(int argc, char *argv[])
{
	int areas[]= { 10, 12, 13, 14, 20};
	char name[] = "Roy";
	char full_name[] = {
		'S','O','U','M','A','N','.','R','O','Y','\0'};
		
	printf("The Size of an int: %ld\n", sizeof(int));

	printf("The Size of areas (int[]): %ld\n", sizeof(areas));

	printf("The numbers of ints in areas: %ld\n", sizeof(areas) / sizeof(int));

	printf("The first area is %d, the 2nd %d.\n", areas[0],areas[1]);

	printf("The size of name (char[]): %ld\n",sizeof(name));

	printf("The Numbers of char: %ld\n",sizeof(name)/sizeof(char));


	printf("The Size of full_name (char[]): %ld\n", sizeof(full_name));

	printf("The number of char: %ld\n", sizeof(full_name)/sizeof(char));



	
	printf("name=\"%s\" and full_name=\"%s\"\n",name,full_name);
	
	return 0;
}

