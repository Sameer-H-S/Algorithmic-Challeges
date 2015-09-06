#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[100],i,key,n;
	
	printf("enter the number of element\n");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("array elements\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
	printf("\n");
	printf("enter the key element\n");
	scanf("%d",&key);
	for(i=0;i<n;)
	{
		if(a[i]==key)
		{
			printf("the value is %d  is at pos %d\n",a[i],i+1);
			return;
		}
		else
			i+=abs(a[i]-key);
	}
}
