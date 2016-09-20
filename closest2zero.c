#include<stdio.h>
#include<conio.h>
int part(int [],int ,int );
void quick_sort(int [],int ,int );
void find3num(int [],int );
int main()
 {
     int a[100],low,high,i,n,k;
     printf("Enter limit: ");
     scanf("%d",&n);
     printf("\nEnter elements: ");
         for(i=0;i<n;i++)
             scanf("%d",&a[i]);
     printf("Enter number: ");
     scanf("%d",&k);
     low=0; high=n-1;
     part(a,low,high);
     quick_sort(a,low,high);
     find3num(a,n);
     getch();
     return 0;
 }
int part(int a[],int low,int high)
 {
    int i=low,j=high,pivot_element=a[high],temp;
      while(i<j)
       {
        if(a[i]<pivot_element)
            i++;
        if(a[j]>=pivot_element)
            j--;
        if(i<j)
         {
          temp=a[i];
          a[i]=a[j];
          a[j]=temp;
         }
       }
    a[high]=a[i];
    a[i]=pivot_element;
    return i;
 }
 void quick_sort(int a[],int low, int high)
  {

       int pivot;
        if(low<high)
         {
             pivot=position(a,low,high);
             quick_sort(a,low,pivot-1);
             quick_sort(a,high,pivot+1);
         }
  }
 void find3num(int a[],int n)
  {
      int sum=0,minsum=0,i,minl=2,minr=n-1,l,r;
         if(n<3)
           {
            printf("Invalid input");
            return;
           }
         for(i=0;i<n-2;i++)
           {
            l=i+1;
            r=n-1;
              while(l<r)
                {
                 sum=a[i]+a[l]+a[r];
                }
              if(abs(sum)<abs(minsum))
               {
                minsum=sum;
                minl=l;
                minr=r;
                printf("Triplet: %d %d %d",a[i],a[minl],a[minr]);
               }
              if(sum<0)
                  l++;
              else
                  r--;
           }
  }
