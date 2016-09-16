#include<stdio.h>
#define MAX 50
int main()
 {
     int a[MAX],i,n,temp,j;
     printf("Enter the total number of elements: ");
     scanf("%d",&n);
     printf("Enter the elements which is to be sorted: ");
       for(i=0;i<n;i++)
           scanf("%d",&a[i]);
       for(i=1;i<n;i++)
         {
          temp=a[i];
          j=i-1;
            while(temp<a[j]&&(j>=0))
              {
               a[j+1]=a[j];
               j=j-1;
              }
          a[j+1]=temp;
         }
     printf("After sorting: ");
        for(i=0;i<n;i++)
             printf("%d",a[i]);
     getch();
     return 0;
 }
