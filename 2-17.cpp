#include<stdio.h>
int main()
{
	double a,b,c,d,e,f,g,h,i,j,k,l,m,n;
	a=9;
	b=6;
    c=-a;
    d=-b;
    e=a+b;
    f=a/b;
    h=a>=b;
    i=a>0&&!b!=0;
    j=a>0,b>0;
    m=a*=b;
    n=sizeof(a);
    printf("c=%lf\n",c);
    printf("d=%lf\n",d);
    printf("e=%lf\n",e);
    printf("f=%lf\n",f);
    printf("h=%lf\n",h);
    printf("i=%lf\n",i);
    printf("j=%lf\n",j);
    printf("m=%lf\n",m);
    printf("n=%lf\n",n);
    return 0;
 } 
