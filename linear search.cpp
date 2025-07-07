#include<stdio.h>
int main()
{
	int a[100],n,i,key,found=0;
	printf("enter the no of terms: ");
	scanf("%d",&n);
	printf("enter the elements in an array:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter the no to search:");
	scanf("%d",&key);
	for(i=0;i<key;i++)
	{
		if(a[i]==key){
			printf("\nNumber to search : %d\n",key);
			printf("number found at position %d ",i+1);
			found=1;
			break;
		}
	}

	if(!found){
		printf("element do not present in the array %d\n:",key);
	
	}
	return 0;
}

