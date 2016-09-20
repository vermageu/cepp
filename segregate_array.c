#include<stdio.h>
#include<conio.h>
#include<limits.h>
void segregate(int [],int n);
void swap(int *,int *);
int main()
 {
   int a[100],n,i,size=0;
   printf("Enter limit: ");
   scanf("%d",&n);
   printf("Enter elements: ");
       for(i=0;i<n;i++)
            scanf("%d",&a[i]);
   size = sizeof(a)/sizeof(a[0]);
   segregate(a,size);
   printf("Segregated array: ");
    for(i=0;i<size;i++)
        printf(" %d",a[i]);
   getch();
   return 0;
 }
void segregate(int a[],int size)
 {
     int l=0,r=size-1;
        while(l<r)
         {
          if(a[l]%2==0 && l<r)
                l++;
          if(a[r]%2==1 && l<r)
                r--;
          if(l<r)
           {
            swap(&a[l],&a[r]);
            l++;
            r--;
           }
         }
 }
void swap(int *a,int *b)
 {
     int temp;
     temp=*a;
     *a=*b;
     *b=temp;
 }
