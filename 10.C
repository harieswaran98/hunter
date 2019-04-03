#include<stdio.h>

int main() {
   int b=0,i,j,h[100],k[100],n,m;
   scanf("%d %d\n",&m,&n);
   for(i=0;i<m;i++)
   {
       scanf("%d",&h[i]);
   }
   for(i=0;i<n;i++)
   {
       scanf("%d",&k[i]);
   }
   
   for(i=0;i<m;i++)
   {
       for(j=0;j<n;j++)
       {
           if(h[j]==k[i])
           {
               b++;
               break;
           }
       }
   }
   if(b==n)
   printf("yes");
   else
   printf("no");
}
