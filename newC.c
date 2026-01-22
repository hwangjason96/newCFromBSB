#include <stdio.h>
/*
 * Author: Jae Sung Hwang
 * Purpose: Familiarizing using the BSB server.
 * */

//Method Name:fib
//Parameter: int n
//returns: an int result
//Explanation: a fibonnaci sequence calculator where the input "n"th digit of the fibonacci sequence will be outputted
//Uses recursion.
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
