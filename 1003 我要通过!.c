#include <stdio.h>
#include <string.h>

int main(void)
{
	int num,i,j;
	int flag=0;
	scanf("%d",&num);
	
	for(i=0;i<num;i++)
	{
		char a[100];
		scanf("%s",a);
		getchar();
		int count1=0; 
		int count2=0;
		int count3=0;

		int x=0,y=0,z=0;
		 
		for(j=0;j<strlen(a);j++)
		{			
				if(a[j]=='P')
				{
					count1++;
					x=j;
				}
				
				else if(a[j]=='T')
				{
					count2++;
					y=j;
				}
				
				else if(a[j]=='A')
				{
					count3++;//PT之间一定要有A啊啊啊啊啊啊！
				}
		}

		if(count1+count2+count3==strlen(a) && count1==1 && count2==1 && x<y-1 &&count3!=0)
		{
			int y1;
			y1=y-x-1;
			z=strlen(a)-y-1;
					
			if(x==z-(y1-1)*x)
			{
				printf("YES\n");
			}
			
			else 
			{
				printf("NO\n");
			}	
  }
		
		else 
		{
			printf("NO\n"); 
			continue;
		}
	}
	return 0;
}
