#include<stdio.h>
#include<string.h>

int main()
{
	int num,i;
	scanf("%d",&num);
	int a,b,c;
	
	a=num%10;
	b=(num/10)%10;
	c=num/100; 
		
	while(c--)
	{
		printf("B");
	}
	
	while(b--)
	{
		printf("S");
	}
	
	for (i=1;i<=a;i++)
	{
		printf("%d",i);
	}
	return 0;
} 
