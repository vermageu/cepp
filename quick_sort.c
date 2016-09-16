#include<stdio.h>
#include<conio.h>
int part(int [],int ,int );
void quick_sort(int [],int ,int );
void display(int [],int ,int );
int main()
 {

     int a[10],low,high,i,n;
     printf("Enter limit: ");
     scanf("%d,&n");
     printf("\nEnter elements: ");
           for(i=0;i<n;i++)
             scanf("%d",&a[i]);
     low=0; high=n-1;
     part(a,low,high);
     quick_sort(a,low,high);
     display(a,low,high);
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
void display(int a[],int low, int high)
 {
     int i;
     printf("Sorted array: ");
        for(i=0;i<high;i++)
            printf(" a[i]");
 }
