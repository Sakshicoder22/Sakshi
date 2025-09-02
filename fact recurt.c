#include<stdio.h>
int factorial(int n);
int main(){
	int n;
	printf("enter a no: ");
	scanf("%d",&n);
	printf("%d",factorial(n));
	
}
int factorial(int n){
	if(n==0){
		return 1;
	}
	else{
		return n*factorial(n-1);
	}
}
