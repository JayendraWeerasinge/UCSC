#include<stdio.h>

int main(){
	int num;
	printf("Enter number: \n");
	scanf("%d", &num);
	
	printf("Factorial is : %d \n", fac(num));
	
}
int fac(int num){
	if(num>1)
		return num*fac(num-1);
	else
		return 1;
}
