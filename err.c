/*Write a c program to find out the following errors:
1. Absolute error.
2. Relative error.
3. Percentage error.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float av,tv,ae,pe,re;
	printf("enter true value");
	scanf("%f",&tv);
	printf("enter approximate value");
	scanf("%f",&av);
	ae=abs(tv-av);
	re=ae/tv;
	pe=re*100;
	printf("Absolute error=%g\n",ae);
	printf("Relative error=%g\n",re);
	printf("Percentage error=%g%%\n",pe);
	getch();
	return 0;
}
