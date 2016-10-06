#include<stdio.h>
#include<malloc.h>
#include<string.h>
void main()
{
    char *a = malloc(sizeof(char)*10);
	strcpy(a,"hey");
    printf("%s",a);
	free( a );
	a = malloc(sizeof(char)*10);
	strcpy(a,"hello");
    printf("%s",a);
	free( a );
}
