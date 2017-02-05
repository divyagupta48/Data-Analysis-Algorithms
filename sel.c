#include<stdio.h>
#include<conio.h>
#include<time.h>
void sel(int a[50],int n)
{
     int i,j,t,min,pos,c=0;
     clock_t t1,t2;
     t1=clock();
     for(i=0;i<n-2;i++,c++)
     {min=a[i];
       pos=i;
       for(j=i+1;j<n-1;j++,c++)
       {
       if(min>a[j]&&c++)
       {
        min=a[j];
        pos=j;
        c++;
       }        }
       if(i!=pos&&c++)
      {
        a[pos]=a[i];
        a[i]=min;
      c++;
    }        }
        t2=clock();
        printf("time=%d\n",t2-t1);
        printf("the no. of steps=%d\n",c);
        }
void display(int arr[50],int n)
{ int i;
     for(i=0;i<n;i++)
     printf("%d\t",arr[i]);
     }
int main()
{
    int arr[50];
    int i,n;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
    arr[i]=rand()%100;
}
    printf("array after sorting:\n");
    sel(arr,n);
   display(arr,n);
    getch();
    return 0;}

