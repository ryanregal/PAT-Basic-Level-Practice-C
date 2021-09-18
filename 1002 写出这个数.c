#include <stdio.h>
#include <string.h>

int main()
{
	//用字符串读入数字，得到各个位数之和sum 
    int sum=0;
    int i;
    char a[110]; 
    
    scanf("%s",a);//a已经表示地址，不用& 
    
    for (i=0;i<strlen(a);i++)
    {
        sum+=(a[i]-'0');
    }
    
    //将sum用拼音输出
	int cnt=0; 
    char b[][5]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	char c[50]; 
	
	if(sum==0)
	{
		printf("ling");
	 } 
		
	 
	while(sum>0)
	{
		c[cnt]=sum%10;
		cnt++; 
		sum/=10;		 
	}
	
	
	for(i=cnt-1;i>=0;i--)//从高位往低位输出 
	{
		printf("%s",b[c[i]]);
		
		if(i!=0) 
		{
			printf(" ");
		}
		else 
		{
			printf("\n"); 
		}
	}
	return 0;
}
