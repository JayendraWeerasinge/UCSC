#include<stdio.h>

int main(){
	int numbers;
	printf("Enter number: \n");
	scanf("%d", &numbers);
	
	printf("Factorial is : %d \n", fac(numbers));
	
}
int fac(int number){
	if(number>1)
		return number*fac(number-1);
	else
		return 1;
}
