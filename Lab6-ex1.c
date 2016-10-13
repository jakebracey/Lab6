#include <stdio.h>
 
int main()
{
    //filename was just initialized as a pointer here with no malloced memory
	//I defined the filename like this for simplicity
	char fileName[50];
    printf("Specify file name you would like to print to: \n");
    scanf("%s",fileName);
 

    FILE* file1 = fopen(fileName, "w");
 
    char c;
	//the loop was searching for 'EOF' when it should have been searching for '0'
	//this made the program fo into an endless loop
    while ((c=getchar()) != '0')
    {
        fprintf(file1, &c);
    }
 
    fclose(file1);
 
    printf("CTRL+d is a correct ending");
 
    return 0;
}
