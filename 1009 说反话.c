#include <stdio.h>
#include <string.h>

int main()
{
	char a[120][100];
	int i,j; 
	i=j=0;
	int k;
	char c;
	
	while(1)
	{
		c=getchar();
		
		if(c=='\n')
		{
			break;
		}
		
		if(c!=' ')
		{
			a[i][j++]=c;
		}
		
		else
		{
			a[i][j]='\0';
			i++;
			j=0;//要把j也调回初始状态！ 
		}
    }
    
    for(k=i;k>0;k--)
    {
    	printf("%s ",a[k]);
	}
	
	printf("%s",a[0]);
	
	return 0;	
}  
