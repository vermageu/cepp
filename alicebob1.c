#include<stdio.h>
int main()
{
 int alice=0,bob=0,i,a[3],b[3];
 FILE *fp;
 fp=freopen("read.txt","r",stdin);
  for(i=0;i<3;i++)
         scanf("%d",&a[i]);
  for(i=0;i<3;i++)
         scanf("%d",&b[i]);
 fclose(fp);
  for(i=0;i<3;i++)
     {

         if(a[i]>b[i])
           alice++;
         else if(a[i]<b[i])
           bob++;
     }
 fp=freopen("write.txt","w",stdout);
 printf("%d_%d",alice,bob);
 fclose(fp);
 return 0;
}
