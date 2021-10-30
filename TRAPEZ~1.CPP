#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int i,n;
double a,b,h,s,I,sum=0.0;
double f(double);
clrscr();
printf("enter the values of n,a,b\n");
scanf("%d%lf%lf",&n,&a,&b);
h=(b-a)/(double)n;
for(i=1;i<=n-1;i++)
{
s=a+i*h;
sum=sum+f(s);
}
I=(h/2.0)*(f(a)+f(b)+2*sum);
printf("the value of I is %12.4lf",I);
getch();
}
double f(double x)
{
double g;
g=1.0/(1+x*x);
return (g);
}
