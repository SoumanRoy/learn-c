#include <stdio.h>
	
int main(int argc, char* argv[])
{
	int distance = 100;
	float power = 2.345f;
	double super_power = 56782.4532;
	char initial = 'A';
	char first_name[] = "Souman";
	char last_name[] ="Roy";
	
	printf("You are %d miles away.\n",distance);
	printf("You have %f level of power.\n",power);
	printf("You have %f awesome super powers.\n",super_power);
	printf("I have a Initial %c.\n",initial);
	printf("My First name is %s.\n",first_name);
	printf("My Last name is %s.\n",last_name);
	printf("My whole name is %s %c.%s.\n",first_name,initial,last_name);
	
 	int bugs = 100;
	double bug_rate=1.2;
	
	printf("You have %d bugs at the imaginary rate of %f.\n",bugs,bug_rate);
	long universe_of_defects = 1L * 1024L * 1024L *1024L;	
	printf("Entire universe have %ld bugs.\n",universe_of_defects);
	
	double expected_bugs = bugs * bug_rate;
	printf("You are expected to have %f bugs.\n",expected_bugs);
	
	double part_of_universe = expected_bugs / universe_of_defects;
	printf("The entire universe is %e protion.\n",part_of_universe);
	
	char nul_byte = '\0';
	int care_percentage = bugs * nul_byte;
	printf("which means you should care %d%%.\n",care_percentage);
	return 0;
}


