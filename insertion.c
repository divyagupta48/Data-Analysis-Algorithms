#include<conio.h>
#include<stdio.h>
#include<time.h>
int main()
{
     int A[50000],i,key=0,j,n,up,temp;
     clock_t t1,t2,t3;
     do
{
     int count=0;
     printf("Enter the size of the array");
     scanf("%d",&n);
     printf("Enter the array elements");
     for(i=1;i<=n;i++)
     {              
     A[i]=rand()%n;
     }
     t1=clock();
     for(j=2;j<=n;j++)
     {
                      count++;
                      key=A[j];   
                      i=j-1;
                      while(i>0 && A[i]>key)           
                           {
                                                count++; 
                                                A[i+1]=A[i];
                                                i=i-1;
                           }
                           A[i+1]=key;
     }
     t2=clock();
     printf("The elements in sorted order are\n");
     for(i=1;i<=n;i++)
     {
                     printf("%d ",A[i]);
     }
     printf("Number of steps=%d",count);
     printf("\ntime=%d\n",t2-t1);
     printf("Press 1 to continue:");
     scanf("%d",&up);
    
}
while(up==1);
     
     getch();
     return 0;
}
