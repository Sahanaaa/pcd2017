#include<stdio.h>

int add(int s, int a)
{
	return (s+a);
}
int main()
{
	int n,a,s=0;
	printf("enter the number of numbers to add \n");
	scanf("%d", &n);	
	for(int i=1; i<=n;i++)
	{
	printf("Enter the Number \n");
	scanf("%d",&a);
	s=add(s,a);
	}
	printf("Sum of the Numbers is %d",s);
}

