#include<stdio.h>
int main()
{
	int i,a[100],b[100],n;
	printf("enter the no of terms:");
	scanf("%d",&n);
	printf("enter the no of elements in first array:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("second array is:\n");
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
	printf("%d\n",b[i]);
}
}

