#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
	int num,i,temp,pair;
	int prime(int aj);
	scanf("%d",&num);
	int a[num];
	int count=0;
	
	for(i=2;i<=num;i++)
	{
		temp=i;
		if(prime(temp))
		{
			a[count]=temp;
			count++;
		}
	}
	
	pair=0;
	for (i=0;i<count;i++)
	{
		if((a[i+1]-a[i])==2)
		{
			pair+=1;
		}
	}
	printf("%d",pair);
	
	return 0;
}

int prime(int aj)
{
	int i;
	int flag=1;
	for(i=2;i<sqrt(aj)+1;i++)
	{
		if(aj%i==0)
		{
			flag=0;
			break;
		}
	}
	
	if(aj==2)
	{
		flag=1;
	}
	
	if(flag==1)
	{
		return 1;
	}
	else if(flag==0)
	{
		return 0;
	}
} 
