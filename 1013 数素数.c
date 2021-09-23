#include <stdio.h>
#include <string.h>
#include <math.h>

int prime(a)
{
	int j,flag=1;
	for(j=2;j<sqrt(a)+1;j++)
	{
		if(a%j==0)
		{
			flag=0;
			break;
		}
	}
	return flag;
}

int main(void)
{
	int M,N,i=2,k,re,count=0;
	int a[100000];
	int prime(a);
	int flag=0;
	scanf("%d %d",&M,&N);
	
	int num=0;
	while(1)
	{
		re=prime(i);
		i++;
		if(re)
		{
			if(count>=M && count<=N)
			{
				a[num]=i;
				num++;
			}
		    count++;
		}
		
		if(count>N)
		{
			break;
		}	
	}
	
	for(k=0;k<count;k++)
	{
		if((k+1)%5!=0 && k!=num-1)
		{
			printf("%d ",a[k]);
		}
		else if((k+1)%5==0 && k!=num-1)
		{
			printf("%d\n",a[k]);
		}
		else if ((k+1)%10==0 && k==num-1)
		{
			printf("%d",a[k]);
		}
	}
	return 0;
}


