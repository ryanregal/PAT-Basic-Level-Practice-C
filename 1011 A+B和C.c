#include <stdio.h>
#include <string.h>

int main(void)
{
	int T,i;
	long long A,B,C;//intȡֵ[-2^63,(-2^63)-1]
	scanf("%d",&T);
	
	for(i=1;i<=T;i++)
	{
		scanf("%lld %lld %lld",&A,&B,&C);
		if(A+B>C)
		{
			printf("Case #%d: %s",i,"true");
		}
		else
		{
			printf("Case #%d: %s",i,"false");
		}
		
		if(i!=T)
		{
			printf("\n");
		}
	}
	return 0;
} 
