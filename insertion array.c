#include<stdio.h>
int main()
{
	int n,i;
	printf("enter no of element you want to insert ");
	scanf("%d",&n);
	int arr[n-1];
	printf("enter the values of array ");
	for(i=0;i<n;i++){
		printf("enter %d position array\n",(i+1));
		scanf("%d",&arr[i]);
		printf("\n");
		
	}
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
	
  return 0;
}

