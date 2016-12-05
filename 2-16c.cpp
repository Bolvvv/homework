#include<stdio.h>
int main()
{
	int a,b,c;
	a=8;
	b=5;
	c=a>>b%32;
	printf("c=%d",c);
	return 0;
}
