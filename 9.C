#include<stdio.h>

int main() {
   int b=0,i,j,h[100],k[100],n,m;
   scanf("%d",&n);
   
   for(i=0;i<n;i++)
   {
       scanf("%d",&k[i]);
   }
   
   for(i=0;i<m;i++)
   {
       for(j=i+1;j<n;j++)
       {
           if(k[i]+k[j]==0)
           {
              printf("%d %d",k[i],k[j]);
           }
       }
   }
   
}
