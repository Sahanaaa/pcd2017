#include<stdio.h>

int add(int a, int b)


{

    int c=a+b;
	return c;

}

	int main()

{
	int x,y,z;
	printf("enter two numbers \n");
	scanf("%d%d", &x, &y);	
	z=add(x,y);
	printf("the sum of %d and %d is %d ",x,y,z);
}
