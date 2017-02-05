#include<stdio.h>
#include<conio.h>
#include<time.h>
static int c;
  void HEAPIFY(int a[50000],int i,int n)
  {
       int l,r,largest,t;
       l=(2*i)+1;
       r=(2*i)+2;
       largest=i;
       if( l<n&&a[largest]<a[l]&&c++)
       largest=l;
       if(r<n&&a[largest]<a[r]&&c++)
       largest=r;
       if(i!=largest&&c++)
       {
          t=a[i];
          a[i]=a[largest];
          a[largest]=t;
          HEAPIFY(a,largest,n);
          }
          }           
       
     void BUILD_HEAP(int a[50000],int n)
     {
          int i;
     for(i=(n-1)/2;i>=0;i--,c++)
     HEAPIFY(a,i,n);
  }
  void HEAP_SORT(int a[50000],int n)
  {
       int i,t;
       BUILD_HEAP(a,n);
       for(i=n-1;i>0;i--,c++)
       {
                         t= a[0];
                         a[0]=a[i];
                         a[i]=t;
                         HEAPIFY(a,0,i);
                         }
                         }
          
void display(int arr[50000],int n)
{
     int i;
     for(i=0;i<n;i++)
     printf("%d\t",arr[i]);
     }
int main()
{
    int a[50000];
    int i,n;
    printf("enter the size of the array\n");
    scanf("%d",&n);
        for(i=0;i<=n;i++)
    {
    a[i]=rand()%n;
}/* printf("enter the array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);*/
        clock_t t1,t2;
     t1=clock();
    //printf("array after sorting:\n");
    HEAP_SORT(a,n);
          t2=clock();
        printf("no. of steps=%d\n",c);
        printf("time=%d\n",t2-t1);
    //display(a,n);
    getch();
    return 0;
}
