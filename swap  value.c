#include<stdio.h>
void swap(int a,int b){
	int temp=a;
	a=b;
	b=temp;
	printf("After swap a = %d and b = %d",a,b);
}
int main()
{
	int a,b;
	printf("enter two values : ");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("before swap a = %d and b = %d\n",a,b);
	swap(a,b);
	return 0;
}

