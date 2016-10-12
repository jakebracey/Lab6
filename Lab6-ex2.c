#include <stdio.h>
void main()
{
    char p[7] = "Mizzou"; //changed to array notation, you can't directly set a string to a pointer
    p[ 3 ] = 'P';
    printf("%s\n",p); // added \n for formating convenience
}
