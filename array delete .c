#include<stdio.h>
int main()
{
	int arr[]={10,20,30,40,50};
	int n=sizeof(arr)/sizeof(int);
	int k,i;
	printf("enter the index of element you want to delet: ");
	scanf("%d",&k);
	for(i=k;i<n;i++){
		arr[i]=arr[i+1];
	}
	for(i=0;i<n-1;i++){
		printf("%d ",arr[i]);
	}
}

