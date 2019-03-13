#include<stdio.h>

int main(){
	int num;
	printf("enter number : ");
	scanf("%d", &num);
	
	int result = prime(num,num/2);
	
	if(result == 1)
		printf("Prime num");
	else
		printf("not prime");
return 0;
}
int prime(int a,int b){
	
	if(b==1)
		return 1;
	else if(a%b == 0)
		return 0;
	else
		prime(a,b-1);
}
