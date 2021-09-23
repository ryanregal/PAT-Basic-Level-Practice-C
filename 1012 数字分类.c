#include <stdio.h>
#include <string.h>

int main(void)
{
	int N,num,i;
	scanf("%d",&N);
	int a[N];
	for (i=0;i<N;i++)
	{
		scanf("%d",&num);
		a[i]=num;
	}
	
	int A1=0,A2=0,A3=0,a4=0,A5=0,count=0,a2=0;
	//ÅÐ¶ÏÌõ¼þ£ºA1=0£¬flag=1£¬A3=0£¬count=0£¬A5=0 
	double A4=0;
	int flag=1;
	
	for (i=0;i<N;i++)
	{
		if(a[i]%10==0)
		{
			A1+=a[i];
		}
		
		else if(a[i]%5==1)
		{
			A2+=a[i]*flag;
			flag*=-1;
			a2++;	
		}
		
		else if(a[i]%5==2)
		{
			A3++;
		}
		
		else if(a[i]%5==3)
		{
			a4+=a[i];
			count++;
		}
		
		else if(a[i]%5==4)
		{
			if(a[i]>=A5)
			{
				A5=a[i];
			}
		}
	}
	
	if(A1==0)
	{
		printf("N ");
	}
	else
	{
		printf("%d ",A1);
	}
	
	if(a2==0)
	{
		printf("N ");
	}
	else
	{
		printf("%d ",A2);
	}	
	
	if(A3==0)
	{
		printf("N ");
	}
	else
	{
		printf("%d ",A3);
	}
	
	if(count==0)
	{
		printf("N ");
	}
	else
	{
		printf("%.1f ",a4*1.0/count);
	}
	
	if(A5==0)
	{
		printf("N");
	}
	else
	{
		printf("%d",A5);
	}
	
	return 0;
} 
