#include <stdio.h>
#include <string.h>

int main()
{
	int a[101]={0};
	int num,i,temp,num1,input;
	
	scanf("%d",&num);
	num1=num;

	while(num1--)
	{
		scanf("%d",&input);
		a[input]=1;
	}
	
	for(i=2;i<=100;i++)
	{
		if(a[i]==1)
		{
			temp=i;
			while(temp!=1)
			{		
				if(temp%2==0)
				{
					temp/=2;
				}
				else
				{
					temp=(3*temp+1)/2;
				}
				
				if(temp<101)
				{
					a[temp]=2;
				}
		   }
		}
 	}
	 
	int count=0;
	for(i=100;i>=0;i--)
	{
		if (a[i]==1)
		{	
			if(count==1)
			{
				printf(" ");
			}
			printf("%d",i);
			count=1;
		}
	}
	return 0;
}
