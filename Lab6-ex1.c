#include <stdio.h>
 
int main()
{
    char fileName[50];
    printf("Specify file name you would like to print to: \n");
    scanf("%s",fileName);
 

    FILE* file1 = fopen(fileName, "w");
 
    char c;
    while ((c=getchar()) != '0')
    {
        fprintf(file1, &c);
    }
 
    fclose(file1);
 
    printf("CTRL+d is a correct ending");
 
    return 0;
}
