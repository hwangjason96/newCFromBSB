#include <stdio.h>
int fib(int n);

int main(){
	int userScan = 0;
	printf("Hello World!\n");
	printf("Tell me which number of fibonnaci you would like to know?: ");
	scanf("%d",&userScan);
	int fibNum = fib(userScan);
	printf("The fibonnaci of %d is %d\n", userScan, fibNum);
	return 0;
}

int fib(int n){
	if (n == 0 || n == 1){
		return n;
	}
	return fib(n-1) + fib(n-2);
}
