#include<stdio.h>

int main(){
	char copy='@';
	int rw,col;
	int nor = 0;

	
	for(rw=10;rw>=nor;rw--){
	
		for(col=10;col<=rw;col--){
			printf("%c",copy);
		}
			printf("\n");
   }

}

