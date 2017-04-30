#include <stdio.h>

/* while - coutinue loop execution */

int main(){
	
	int counter = 15; 
	
	while ( counter > 0){

		if( counter == 5){
		  counter--;
		  continue;
	}
       printf("%d ", counter);
	        counter--;

 }

}




