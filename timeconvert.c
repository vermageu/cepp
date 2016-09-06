//Convert time from 12 hr. format to military format(24 hr)

#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
     {
       int h,m,s;
       char c[2];
       scanf("%d:%d:%d%s",&h,&m,&s,&c);
        if(strcmp(c,"PM")==0&&h!=12)
            h+=12;
        else if(strcmp(c,"AM")==0&&h==12)
            h=0;
         printf("%02d:%02d:%02d",h,m,s);
    getch();
    return 0;
   }
