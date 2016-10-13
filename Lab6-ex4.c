 
#include<stdio.h>
#include<string.h>
void main()
{
    int i=0;
    char arr1[ 20 ] = "Trumantiger"; //increased the number of elements in arr1 to that of arr2 so that strcpy doesn't cause seg fault
    char arr2[ 20 ];
    while(i<20){
        arr2[ i ] = 'A';
	++i;
    }
    strcpy( arr1 , arr2 );
    printf("%s",arr1);
    return;
}
