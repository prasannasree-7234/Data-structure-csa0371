#include <stdio.h>

int main(){
   int n1=0,n2=1,i,n;
   printf("enter the value of n \n");
   scanf("%d",&n);
   
   printf("\n%d",n1);
   
   for(i=1;i<=(n-1);i++) {
       printf("\n%d",n2);
       int n=n1+n2;
       n1=n2;
       n2=n;
   }
    return 0;
}