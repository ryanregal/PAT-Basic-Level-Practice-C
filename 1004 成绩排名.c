#include <stdio.h>
#include <string.h>

int main()
{
	struct temp 
	{	
		char name[15];
		char num[15];
		int grade;
	}student,max,min;

	int count;
	scanf("%d",&count);
	min.grade=101;
	max.grade=-1;
	
	while(count--)
	{
		scanf("%s %s %d",student.name,student.num,&student.grade);
		
		if (student.grade<min.grade)
		{
			min=student;
		}
		
		if (student.grade>max.grade)
		{
			max=student;
		}
	}
	
	printf("%s %s\n",max.name,max.num);
	printf("%s %s",min.name,min.num);
	
	return 0;
} 
