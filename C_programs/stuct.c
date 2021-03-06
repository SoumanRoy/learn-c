#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<string.h>
	
	struct Person{                                   //creates a compound element which hold multiple data types
		char* name;
		int age;
		int height;
		int weight;
	};
	

	// create function to make stucture
	struct Person *Person_create(char* name, int age, int height, int weight) 

	{
		struct Person *who  = malloc(sizeof(struct Person)); // malloc allocate raw memory from the OS
		assert(who!= NULL);                             // Assure that it copies the data to the memory. 
		who->name = strdup(name); // 
		who->age = age;
		who->height = height;
		who->weight = weight;
		
	return who;
	}
	
	
	void Person_destroy(struct Person *who)
	{
		assert(who != NULL);
		free (who->name);
		free(who);
	}
		void Person_print(struct Person *who)
	{
		printf("Name: %s\n", who->name);
		printf("\tAge: %d\n", who->age);
		printf("\tHeight: %d\n",who->height);
		printf("\tWeight: %d\n",who->weight);
	}
	
	int main(int argc, char *argv[])
	{
	 	//make two people structure
		struct Person *joe = Person_create("Souman Roy",22,42,134);
		struct Person *frank = Person_create("Frank Blank",23,44,132);
	
	//print them out and where they are in memory
	printf("Joe is at memory location %p:\n",joe);
	Person_print(joe);
	
	printf("Frank is at memory location %p:\n",frank);
	Person_print(frank);

	//make everyone age 20 years and print them again

	joe->age+= 20;
	joe->height -= 2;
	joe->weight += 40;
	Person_print(joe);
	
	frank->age += 20;
	frank->weight += 20;
	Person_print(frank);
	
	//destory them both so we clean up
	
	Person_destroy(joe);
	Person_destroy(frank);
	
	return 0;
}


