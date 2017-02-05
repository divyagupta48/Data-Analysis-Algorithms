//MERGE SORT
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 100000000
int A[MAX],B[MAX];
void merge(int A[],int lb,int mid,int ub)
{
	int end=mid,i=lb,x=lb;
	while(lb<=end && (1+mid)<=ub)
	{
		if(A[lb]<A[1+mid]) B[i++]=A[lb++];
		else B[i++]=A[1+mid++];
	}
	while(lb<=end) B[i++]=A[lb++];
	while((1+mid)<=ub) B[i++]=A[1+mid++];
	for(i=x;i<=ub;i++)	A[i]=B[i];
}
void merge_sort(int A[],int lb,int ub)
{
	int mid;
	if(lb<ub)
	{
		mid=(lb+ub)/2;
		merge_sort(A,lb,mid);
		merge_sort(A,mid+1,ub);
		merge(A,lb,mid,ub);
	}
}
int main()
{
	int i,n,c=0;
	clock_t t1,t2;
		printf("\n\n\n\n\nEnter Size:");
		scanf("%d",&n);
		for(i=0;i<n;i++)
			A[i]=rand()%10000;
		printf("\n\nBefore Sorting:\n");
		for(i=0;i<n;i++)
			printf("%d\t",A[i]);
		t1=clock();
		merge_sort(A,0,n-1);
		t2=clock();
		printf("\n\nAfter Sorting:\n");
		for(i=0;i<n;i++)
			printf("%d\t",A[i]);
		printf("\nExecution Time:%d",t2-t1);
	return 0;
}
