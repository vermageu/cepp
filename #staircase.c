// # Staircase

#include<stdio.h>
#include<conio.h>
int main()
 {
   int a[10][10],i,j,n;
   printf("Enter limit: ");
   scanf("%d",&n);
    for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
        {
         if(i+j<n-1)
                printf(" ");
         else
                printf("#");
        }
       printf("\n");
     }
 getch();
 return 0;
 }
