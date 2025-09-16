#include<stdio.h>
void swap(int*c,int*d){
	int temp=*c;
	*c=*d;
	*d=temp;
	
}

int main()
{
	int a,b;
	printf("enter two no : ");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("before swap a = %d and b = %d\n",a,b);
	swap(&a,&b);
	printf("after swap a = %d and b = %d",a,b);
	
    return 0;
}

