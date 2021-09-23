#include <stdio.h>
#include <string.h>

int main(void)
{
	int i,N,M,temp;
	scanf("%d %d",&N,&M);
	int A[N];
	
	for(i=0;i<N;i++)
	{
		scanf("%d",&A[i]);
	}
	
	M=M%N;
	if(M==0)
	{
		for(i=0;i<N-1;i++)
		{
			printf("%d ",A[i]);
		}
		printf("%d\n",A[N-1]);
	}
	
	else
	{
		for(i=N-M;i<N;i++)
		{
			printf("%d ",A[i]);
		}
			
		for(i=0;i<N-M-1;i++)
		{
			printf("%d ",A[i]);
		} 
		
		printf("%d\n",A[N-M-1]);
	}
	
	return 0;
} 
