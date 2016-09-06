//Find absolute difference between diagonals of a matrix

#include<stdio.h>
#include<conio.h>
int main()
{
   int n,a[10][10],i,j,sumprinc=0,sumsec=0,absdiff=0;
   printf("Enter order of sq. matrix(<10): ");
   scanf("%d",&n);
   printf("\nEnter elements: ");
     for(i=0;i<n;i++)
      {
        for(j=0;j<n;j++)
           {
               scanf("%d",&a[i][j]);
           }
      }
     for(i=0;i<n;i++)
      {
       for(j=0;i<n;j++)
            {
                if(i==j)
                    sumprinc=sumprinc+a[i][j];
                else if((i+j)==n-1)
                    sumsec=sumsec+a[i][j];
            }
      }
   absdiff=(sumprinc-sumsec);
    if(absdiff<0)
      printf("\nAbsolute Difference: %d",-absdiff);
    else
      printf("\nAbsolute Difference: %d",absdiff);
   getch();
   return 0;
}
