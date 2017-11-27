#include <stdio.h>

int main(void){
	int n;
	scanf("%d", &n);

	if(n == 1)
		printf("0\n");
	else if(n == 2)
		printf("0 1\n");
	else{
		int i, fib[n];
		fib[0] = 0;
		fib[1] = 1;

		for(i = 2; i<n; i++){
			fib[i] = fib[i-1] + fib[i-2];
		}
		for(i = 0; i<n-1; i++){
			printf("%d ", fib[i]);
		}
		printf("%d\n", fib[n-1]);
	}
	return 0;
}