#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#define max 10000
static int c;
static int t1;
clock_t c1,c2;
void swap(int*a,int*b)
{
     int t=*a;
     *a=*b;
     *b=t;
}
int part(int a[],int l,int h)
{
    int x=a[h];
    int i=(l-1);
    int j; 
    for(j=l;j<=h-1;j++,t1++)
    {
      if (a[j]<=x)
      {
                  t1++;
         i++;
      swap(&a[i],&a[j]);
      }
    }
    swap(&a[i+1],&a[h]);
    return(i+1);
}
int quick(int a[],int l,int h)
{   int p;
    if(l<h)
    {
        t1++;
      p=part(a,l,h);
      quick(a,l,p-1);
      quick(a,p+1,h);
}
}
int main()
{     
          int a[max] ,i,n,j,t,min;
      printf("enter limit");
      scanf("%d",&n);
      for(i=0;i<n;i++)
       a[i]=rand()%100;
           c1=clock();
             quick(a,0,n-1);
        c2=clock();
        for(i=0;i<n;i++)
        printf("%d\t",a[i]);
         printf("\nsteps=%d\n",t1);
   printf("clock=%d",c2-c1);
        getch();
   return 0;
}
