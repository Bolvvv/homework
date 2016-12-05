#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
	a=9;
	b=6;
    c=-a;
    d=-b;
    e=a+b;
    f=a/b;
    g=a%b;
    h=a>=b;
    i=a>0&&!b!=0;
    j=a>0,b>0;
    k=a>>b%32;
    l=a&b;
    m=a*=b;
    n=sizeof(a);
    printf("c=%d\n",c);
    printf("d=%d\n",d);
    printf("e=%d\n",e);
    printf("f=%d\n",f);
    printf("g=%d\n",g);
    printf("h=%d\n",h);
    printf("i=%d\n",i);
    printf("j=%d\n",j);
    printf("k=%d\n",k);
    printf("l=%d\n",l);
    printf("m=%d\n",m);
    printf("n=%d\n",n);
    return 0;
 } 
