#include<stdio.h>
int main()
{
	int x=1309;
	int *p = NULL;
	printf("\n The value of x is = %d",x);
	
	//needed to use %p instead of %d since we were wanting to print out a pointer
	//we also didn't need to dereference the pointer so just using p worked fine
	printf("\n The pointer points to the value = %p",p);
	return 1;
}
