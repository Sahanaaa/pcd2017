#include<stdio.h>

int add(int a, int b,int c)


{

    int d=a+b+c;
	return d;

}

	int main()

{
	int x,y,z,u;
	printf("enter three numbers \n");
	scanf("%d%d%d", &x, &y, &z);	
	u=add(x,y,z);
	printf("the sum of %d, %d and %d is %d ",x,y,z,u);
}
