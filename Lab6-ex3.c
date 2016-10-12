#include <stdio.h>

int factorial ( int num )
{
    if(num>1)//needed this if/else statemnt combinatation so once the recursive funciton got to 1 it would break out of the loop
	//if you don't do this the propgram keeps going until negative infinity which creates a seg fault
		return num * factorial( num - 1 );
	
	else
		return num;
}

int main(void)
{
    int no,ans;
    printf("Enter the number \n");
    scanf( "%d", &no );
    ans = factorial( no );
    printf("The factorial is %d ", ans );
    return 0;
}
