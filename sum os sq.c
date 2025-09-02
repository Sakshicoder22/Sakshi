#include<stdio.h>
int main(){
	int sum=0,n,i;
	printf("enter a no : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		sum=sum+(i*i);
	}
	printf("the sum of square of natural no is %d",sum);
}
