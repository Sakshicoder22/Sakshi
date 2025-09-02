#include<stdio.h>
int main(){
	int n,i;
	printf("enter a no : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i%2==0){
			printf("%d even no \n",i);
		}
		else{
			printf("%d odd no \n",i);
		}
	}
}
