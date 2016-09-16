#include<stdio.h>
#include<math.h>
#define max 50
int abs(int a)
 {
    if(a<0)
        return -a;
    else
        return a;
 }
int main()
 {
     int a[max],i,n,flag=0;
     printf("Enter limit: ");
     scanf("%d",&n);
     printf("\nEnter elements: ");
       for(i=0;i<n;i++)
         scanf("%d",&a[i]);
       for(i=0;i<n;i++)
        {
         if(a[abs(a[i])]>0&&a[abs(a[i])]!=n)
             a[abs(a[i])]=a[abs(a[i])]*(-1);
         else if(a[abs(a[i])]<0||a[abs(a[i])]==n)
            {
             flag=1;
             break;
            }
        }
     if(flag==1)
        printf("\nDuplicacy found");
     else
        printf("\nDuplicacy not found");
     return 0;
 }


