#include <stdio.h>

int main(void)
{
    int i,a;
    i=0;
    scanf("%d",&a);
    while (a!=1)
    {
       if(a%2==0)
          {
            a=a/2;
            i++; 
          }
        else if(a%2==1)
          {
            a=(3*a+1)/2;
            i++;
          }
    } 
    printf("%d",i);
}

