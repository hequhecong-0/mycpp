#include <stdio.h>
typedef struct Stu
{
	int ID;
	char name[10];
	double score[8];
} Stu;
void input(Stu *st)
{
	int i,j;
	for(i=0; i<3; i++)
	{
	printf("请输入第%d名学生的学号：\n",i+1);
	scanf("%d",&st[i].ID);
	printf("请输入学生的姓名: \n");
	scanf("%s",st[i].name);
	printf("请输入八门成绩\n");
		for(j=0; j<8; j++)
			scanf("%lf",&st[i].score[j]);
	}
}
void findmax(Stu st);
void output(Stu *st)
{
	int i,j;
	for(i=0; i<3; i++)
	{
	printf("\n第%d名学生的学号：", i+1);
	printf("%d",st[i].ID);
	printf("\n第%d名学生的姓名: ", i+1);
	printf("%s",st[i].name);
	printf("\n八门成绩为\n");
		for(j=0; j<8; j++)
			printf("%.1f   ", st[i].score[j]);
	findmax(st[i]);
	}
}
void arrange(Stu *st)
{
	int i,j;
	double temp;
	for(i=0; i<2; i++)
		for(j=2; j>i ; j--)
			if(st[j].score[0] < st[j-1].score[0])
			{
				temp= st[j-1].score[0];
				st[j-1].score[0] = st[j].score[0];
				st[j].score[0]=temp;
			}
	printf("\n第一门成绩排序后的为： \n");
	for(i=0; i<3; i++)
		printf("%.1f  ",st[i].score[0]);
}
void findmax(Stu st)
{
	int i;
	double max=st.score[0];
	for(i=0; i<8 ; i++)
	{
		if(st.score[i]>max)
			max=st.score[i];
	}
	printf("\n最高分为:%lf \n",max);
}
int main()
{
	Stu stuent[4];
	input(stuent);
	output(stuent);
	arrange(stuent);
	return 0;
}