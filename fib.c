#include<stdio.h>

int main(){
	int n;
	printf("enter number : \n");
	scanf("%d", &n);
	
	printf("result : %d ", fib(n));

}

int fib(int n){
	
	if(n==0 || n==1)
		return n;
		
	else
		return (fib(n-1)+ fib(n-2));
}

