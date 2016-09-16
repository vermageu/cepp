#include<stdio.h>
#define MAX 50
void part(int a[],int low,int high)
 {
     int mid;
        if(low<high)
         {
          mid=(low+high)/2;
          part(a,low,mid);
          part(a,mid+1,high);
          merge_sort(a,low,mid,high);
         }
 }
void merge_sort(int a[],int low,int mid,int high)
 {
     int i,m,k,l,temp[MAX];
     l=low;
     i=low;
     m=mid+1;
       while((l<=mid)&&(m<=high))
        {
         if(a[l]<=a[m])
          {
           temp[i]=a[l];
           l++;
          }
         else
          {
           temp[i]=a[m];
           m++;
          }
        i++;
        }
      if(l>mid)
       {
        for(k=m;k<=high;k++)
         {
          temp[i]=a[k];
          i++;
         }
       }
     else
        {
         for(k=l;k<=mid;k++)
          {
           temp[i]=a[k];
           i++;
          }
         for(k=low;k<=high;k++)
          {
           a[k]=temp[k];
          }
        }
 }
int main()
 {
     int merge[MAX],i,n;
     printf("Enter the total number of elements: ");
     scanf("%d",&n);
     printf("Enter the elements which is to be sorted: ");
       for(i=0;i<n;i++)
        scanf("%d",&merge[i]);
     part(merge,0,n-1);
     printf("After merge sorting, Elements are: ");
        for(i=0;i<n;i++)
            printf("%d",merge[i]);
     getch();
     return 1;
 }

