#include<stdio.h>
#include<conio.h>
int maxdiff(int [],int );
int main()
 {
     int a[100],n,i;
     printf("Enter limit: ");
     scanf("%d",&n);
     printf("Enter elements: ");
         for(i=0;i<n;i++)
             scanf("%d",&a[i]);
     maxdiff(a,n);
     printf("Max_Diff is %d",maxdiff(a,n));
     getch();
     return 0;
 }
int maxdiff(int a[],int n)
 {
     int max_diff=a[1]-a[0],min=a[0],i;
        for(i=1;i<n;i++)
         {
          if((a[i]-min)>max_diff)
             max_diff=a[i]-min;
          if(a[i]<min)
             min=a[i];
         }
    return max_diff;
 }
