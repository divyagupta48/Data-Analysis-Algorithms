#include<stdio.h>
void sort(int[50],int);
int main()
{
	int a[50],i,n;
	printf("enter the length of array:");
	scanf("%d",&n);
		printf("enter the array:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
		sort(a,n);
	printf("sorted array:\n");
    for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	return 0;
}
void sort(int a[50],int n)
{
	int i,j,t,c=10,min,pos;
		for(i=0;i<n-1;i++)
	{
	min=a[i];
	pos=i;
		for(j=i+1;j<n;j++)
		{ 
			if(min>a[j])
			{
				min=a[j];
				pos=j;
	
		}
	}
	if(i!=pos)
	{
		a[pos]=a[i];
		a[i]=min;
		
	}
	}
	printf("no. of steps:%d\n",c);
}
