#include <stdio.h>
#include <string.h>

void tester(int* c, int k) {
	printf("x[%d] = %d\n", k, c[k]);
	c[10000]=1309;
}

int main(int argc, char* argv[]) {
	int i = 0, j, k;
	int x[10001]; //increased the amount of elements in x array to avoid seg fault found in tester
	
	while(i < 1000){
		x[i] = i;
		i++;
	}

	printf("Enter an integer between 0 to 9999: ");
	fflush(stdout);
	scanf("%d",&k);

	tester(x, k);
}
