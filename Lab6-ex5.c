#include<stdio.h>
#include<malloc.h>
#include<string.h>
void main()
{
    //need these 2 lines since you have to malloc space for the array. 
	//after you have your empty array, you can't simply set characters = to an array
	//you have to use a function such as strcpy
	char *a = malloc(sizeof(char)*10);
	strcpy(a,"hey");
    
	
	printf("%s",a);
	free( a );
	
	//need these 2 lines since you have to malloc space for the array. 
	//after you have your empty array, you can't simply set characters = to an array
	//you have to use a function such as strcpy
	a = malloc(sizeof(char)*10);
	strcpy(a,"hello");
    printf("%s",a);
	free( a );
}
