#include<stdio.h>
int main()
{
	int arr[]={2,3,4,5,6,7,8};
	int n=sizeof(arr)/sizeof(int);
	int i,j,k;
	printf("array before deletion: \n");
	for(i=0;i<n;i++){
		printf("arr[%d]=%d\n",i,arr[i]);
		
	}
	printf("enter the index you want to delete");
	scanf("%d",&k);
	for(j=k;j<n;j++){
		arr[j]=arr[j+1];
	}
	n=n-1;
	printf("array after deletion");
	for(i=0;i<n;i++){
	printf("arr[%d]=%d\n",i,arr[i]);
    }
 return 0;
}

