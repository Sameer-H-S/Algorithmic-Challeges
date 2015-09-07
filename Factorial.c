#include<stdio.h>

int main()
{
	int i,n,fact=1;
	printf("enter the element\n");
	scanf("%d",&n);
	for(i=n;i>1;i--)
		fact=fact*i;
	printf("Factorial of %d is   %d\n",n,fact);
}
