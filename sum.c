#include<stdio.h>
int main(){
	int n,i,sum=0;
	printf("enter a no: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum=sum+i;
	}
	printf("the sum of no is %d",sum);
}
