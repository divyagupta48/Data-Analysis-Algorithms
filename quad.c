#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a,b,c,d;
	float x1,x2,p,q;
	printf("enter a,b,c\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	d=(b*b)-(4*a*c);
	if(d==0)
	{
		x1=-b/(2*a);
		x2=x1;
		printf("x1=%f\n",x1);
		printf("x2=%f\n",x2);
	}
	else if(d>0)
	{
		x1=(-b+sqrt(d))/(2*a);
		x2=(-b+sqrt(d))/(2*a);
		printf("x1=%f\n",x1);
		printf("x2=%f\n",x2);
	}
	else
	{
		p=-b/(2*a);
		q=sqrt(abs(d))/(2*a);
		printf("x1=%f+%fi\n",p,q);
		printf("x2=%f-%fi\n",p,q);
	}
	getch();
	return 0;
}
