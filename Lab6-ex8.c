#include<stdio.h>
#include<string.h>
#include<malloc.h>

int main(void)
{
	char s[25]; //changed s to array notation to staticly allocated space
	char *dyn_s;
	int ln;
	printf("Enter the input string\n");
	scanf("%s",s);
	ln = strlen(s);
	dyn_s = (char*)malloc(strlen(s)+1); //removed "*" behind dyn_s. you shouldn't dereference the variable you're trying to malloc
	dyn_s = s;
	dyn_s[strlen(s)]='\0';
	printf("%s\n", dyn_s); //changed printf formatting due to warnings
	return 0;
}

